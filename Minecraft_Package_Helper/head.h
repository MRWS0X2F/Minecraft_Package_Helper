#pragma once

//包含相关头文件
#include<iostream>
#include<string.h>
#include<Windows.h>

//App信息
class AppInfo
{
public:
    static int AppLanguage;
    //获取名称
    static std::string getAppName()
    {
        return AppName;
    }
    //获取版本
    static std::string getAppVision()
    {
        return Vision;
    }
    //获取作者
    static std::string getAppAuthor()
    {
        return Author;
    }
    //获取地址
    static std::string getAppAddress()
    {
        return Address;
    }
private:
    static std::string AppName;
    static std::string Vision;
    static std::string Author;
    static std::string Address;
};

//在AppInfo外初始化
//默认语言
#include"AppConfig.h"
int AppInfo::AppLanguage = Config::getDataFormConfig_int("Language");

#include"language.h"

//在AppInfo外初始化
std::string AppInfo::AppName = language::getText("Welcome");
std::string AppInfo::Vision = language::getText("Vision") + ":0.0.1";
std::string AppInfo::Author = language::getText("Author") + ":MRWS0X2F";
std::string AppInfo::Address = language::getText("Address") + ": https://github.com/MRWS0X2F/Minecraft_Package_Helper/";

//包的默认信息
class PackInfo
{
public:
    //包名
    static string PackName;
    //包标题
    static string title;
    //包简介
    static string Describe;
    //包作者
    static string PackAuthor;
    //包版本
    static int PackVision[3];
    //包类型
    static int PackType;
    //最低游戏版本
    static int minVision[3];
};

string PackInfo::PackName = Config::getDataFormConfig_string("pack_name");
string PackInfo::title = Config::getDataFormConfig_string("title");
string PackInfo::Describe = Config::getDataFormConfig_string("describe");
string PackInfo::PackAuthor = Config::getDataFormConfig_string("author");
//int PackInfo::PackVision[3] = Config::getDataFormConfig_int("pack_name");
//int PackInfo::PackType = Config::getDataFormConfig_int("pack_name");
//int PackInfo::minVision[3] = Config::getDataFormConfig_int("pack_name");

class Settings
{
public:
    static void AppSetting()
    {
        int choose = 0;
        cout << "******\t(1):" + language::getText("SetLanguang") << endl;
        cout << "***************************************" << endl;
        cout << language::getText("Function") << ":";
        cin >> choose;
        if (choose<=1)
        {
            system("cls");
            cout << "******\t(0):" + language::getText("zh_CN") << endl;
            cout << "******\t(1):" + language::getText("en_US") << endl;
            cout << "***************************************" << endl;
            cout << language::getText("ChooseLanguage")<<":";
            cin >> AppInfo::AppLanguage;
            system("cls");
        }
        //else if (choose<=2)
        //{

        //}
    }
};