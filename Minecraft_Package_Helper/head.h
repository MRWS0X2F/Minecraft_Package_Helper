#pragma once

//包含相关头文件
#include<iostream>
#include<string.h>
#include<Windows.h>
#include"language.h"

//App信息
class AppInfo
{
public:
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
std::string AppInfo::AppName = language::getText("Welcome");
std::string AppInfo::Vision = language::getText("Vision") + ":0.0.1";
std::string AppInfo::Author = language::getText("Author") + ":MRWS0X2F";
std::string AppInfo::Address = language::getText("Address") + ": https://github.com/MRWS0X2F/Minecraft_Package_Helper/";

class Settings
{
public:
    static void AppSetting()
    {
        int tmp = 0;
        int choose = 0;
        cout << "******\t(1):" + language::getText("SetLanguang") << endl;
        cout << "******\t(2):" + language::getText("configDir") << endl;
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
            cin >> language::AppLanguage;
            system("cls");
        }
        //else if (choose<=2)
        //{

        //}
    }
};