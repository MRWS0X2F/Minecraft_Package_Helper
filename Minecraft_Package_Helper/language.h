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
		auto text_size = text.size();
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

private:
	static string FileName[64];
};

//在类外初始化
string language::FileName[64] = { "zh_CN.lang","en_US.lang" };
