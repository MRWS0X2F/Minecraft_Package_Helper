#pragma once

#include<string>
#include<iostream>
#include<fstream>
#include<winnt.h>
using namespace std;

//语言类
class language
{
public:
	//静态类成员
	static int AppLanguage;
	static string getText(const string text)
	{
		string tmp;
		ifstream languageFile("./lib/language/" + FileName[AppLanguage]);
		if (languageFile.is_open())
		{
			while (getline(languageFile, tmp))
			{
				int pos = tmp.find(text + "=");
				if (pos>=0)
				{
					int equal = tmp.find("=");
					int end = tmp.find(";");
					return tmp.substr(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(equal) + 1, static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(end) - equal - 1);
				}
			}
		}
		else {
			return "Can't read " + FileName[AppLanguage];
		}
		return tmp;
	}

private:
	static string FileName[64];
};

//在类外初始化
int language::AppLanguage = 0;
string language::FileName[64] = { "zh_CN.lang","en_US.lang" };