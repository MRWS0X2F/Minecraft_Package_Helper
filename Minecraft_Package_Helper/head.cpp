#include"head.h"

std::string AppInfo::getAppName() {
	return AppName;
}

std::string AppInfo::getAppVision() {
	return Vision;
}

std::string AppInfo::getAppAuthor()
{
	return Author;
}

std::string AppInfo::getAppAddress()
{
	return Address;
}

#include"language.h"
//定义语言文件名称
std::string language::FileName[64] = { "zh_cn.lang","en_us.lang" };

//获取当前语言的文字
std::string AppInfo::AppName = language::getText("Welcome");
std::string AppInfo::Vision = language::getText("Vision") + ":0.0.1";
std::string AppInfo::Author = language::getText("Author") + ":MRWS0X2F";
std::string AppInfo::Address = language::getText("Address") + ": https://github.com/MRWS0X2F/Minecraft_Package_Helper/";