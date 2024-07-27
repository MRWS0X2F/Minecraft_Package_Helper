#include"language.h"

//定义语言文本的文件名
std::string language::FileName[64] = { "zh_cn.lang","en_us.lang" };

//读取配置文件中的语言参数
#include"AppConfig.h"
int language::AppLanguage = Config::getDataFormConfig_int("Language");

//获取语言文件中指定文本
std::string language::getText(const std::string &text)
{
	//获取关键词的长度
	auto text_size = text.size();
	std::string line;
	//打开语言文件
	std::ifstream languageFile("./lib/language/" + FileName[AppLanguage]);
	//如果文件不存在或打不开
	if (!languageFile.is_open())
	{
		return "Can't read " + FileName[AppLanguage];
	}
	else
	{
		//从语言文件中获取每一行的文本
		while (getline(languageFile, line))
		{
			//查找“=”的位置
			auto equal = line.find("=");
			//检查此行中是否匹配
			for (unsigned int i = 0; i <= equal; i++)
			{
				if (line.substr(i, 1) != text.substr(i, 1))
				{
					break;
				}
				if (i == text_size - 1)
				{
					return line.substr(equal + 1, line.size() - equal);
				}
			}
		}
	}
	//如果文件中没用关键词
	return "Can't find " + text;
}
