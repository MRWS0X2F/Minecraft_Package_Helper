#pragma once

#include<string>
#include<iostream>

//语言类
class language
{
public:
	//静态类成员
	static int AppLanguage;
	static std::string getText(const std::string &text);
private:
	static std::string FileName[64];
};
