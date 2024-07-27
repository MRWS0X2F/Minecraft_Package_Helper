#pragma once

#include<string>
#include<iostream>

//语言类
class language
{
	//静态类成员
public:
	//定义APP当前使用的语言
	static int AppLanguage;
	//获取语言文件中指定文本
	static std::string getText(const std::string &text);
private:
	//定义语言文本的文件名
	static std::string FileName[64];
};
