#include"language.h"

//读取配置文件中的语言参数
#include"AppConfig.h"
int language::AppLanguage = Config::getDataFormConfig_int("Language");

std::string language::getText(const std::string &text)
{
	auto text_size = text.size();
	std::string tmp;
	std::ifstream languageFile("./lib/language/" + FileName[AppLanguage]);
	if (!languageFile.is_open())
	{
		return "Can't read " + FileName[AppLanguage];
	}
	else
	{
		while (getline(languageFile, tmp))
		{
			auto equal = tmp.find("=");
			for (int i = 0; i <= equal; i++)
			{
				if (tmp.substr(i, 1) != text.substr(i, 1))
				{
					break;
				}
				if (i == text_size - 1)
				{
					return tmp.substr(equal + 1, tmp.size() - equal);
				}
			}
		}
	}
	return "Can't find " + text;
}
