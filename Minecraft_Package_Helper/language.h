#pragma once

#include<string>
#include<iostream>
#include<fstream>
#include"head.h"
using namespace std;

//语言类
class language
{
public:

	//静态类成员
	static string getText(const string text)
	{
		string tmp;
		ifstream languageFile("./lib/language/" + FileName[AppInfo::AppLanguage]);
		if (!languageFile.is_open())
		{
			return "Can't read " + FileName[AppInfo::AppLanguage];
		}
		else 
		{
			while (getline(languageFile, tmp))
			{
				if (tmp.substr(0, 1) == text.substr(0, 1))
				{
					auto pos = tmp.find(text + "=");
					if (pos == 0)
					{
						auto equal = tmp.find("=");
						auto end = tmp.find(";");
						return tmp.substr(equal + 1,end - equal - 1);
					}
				}
			}
		}
		return "Can't find " + text;
	}

private:
	static string FileName[64];
};

//在类外初始化
string language::FileName[64] = { "zh_CN.lang","en_US.lang" };