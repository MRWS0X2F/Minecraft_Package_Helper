#pragma once

//包含相关头文件
#include<iostream>
#include<string.h>
#include<Windows.h>

//App信息
class AppInfo
{
public:
    //获取名称
    static std::string getAppName();
    //获取版本
    static std::string getAppVision();
    //获取作者
    static std::string getAppAuthor();
    //获取地址
    static std::string getAppAddress();
private:
    static std::string AppName;
    static std::string Vision;
    static std::string Author;
    static std::string Address;
};

//包的默认信息
struct PackInfo
{
public:
    //包名
    std::string PackName;
    //包标题
    std::string title;
    //包简介
    std::string Describe;
    //包作者
    std::string PackAuthor;
    //包版本
    int PackVision[3];
    //包类型
    int PackType;
    //最低游戏版本
    int minVision[3];
};

//string PackInfo::PackName = Config::getDataFormConfig_string("pack_name");
//string PackInfo::title = Config::getDataFormConfig_string("title");
//string PackInfo::Describe = Config::getDataFormConfig_string("describe");
//string PackInfo::PackAuthor = Config::getDataFormConfig_string("author");
//int PackInfo::PackVision[3] = {0,0,1};
//int PackInfo::PackType = 0;
//int PackInfo::minVision[3] = {1,16,0};

//void getPackType()
//{
//    if (Config::getDataFormConfig_string("type")=="R")
//    {
//        PackInfo::PackType = 0;
//    }
//    else if (Config::getDataFormConfig_string("type") == "B")
//    {
//        PackInfo::PackType = 1;
//    }
//    else if (Config::getDataFormConfig_string("type") == "RB")
//    {
//        PackInfo::PackType = 2;
//    }
//    else {
//        cout << language::getText("PackTypeERROR") << endl;
//    }
//}
//
//void getPackVision()
//{
//    for (int i = 0;i <= sizeof(PackInfo::PackVision) / sizeof(int) - 1; i++)
//    {
//        PackInfo::PackVision[i] = Config::getDataFormConfig_int("version", "packv",i);
//    }
//}
//
//void getMinVision()
//{
//    for (int i = 0; i <= sizeof(PackInfo::minVision) / sizeof(int) - 1; i++)
//    {
//        PackInfo::minVision[i] = Config::getDataFormConfig_int("version", "minv", i);
//    }
//}

class Settings
{
public:
    static void AppSetting();
};