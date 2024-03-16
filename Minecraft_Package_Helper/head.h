#pragma once

constexpr auto RP = 0;
constexpr auto BP = 1;
constexpr auto Addones = 2;
//包含相关头文件
#include<iostream>
#include<string.h>
#include<windows.h>

//App信息
class AppInfo
{
public:
    //获取名称
    static std::string getAppName()
    {
        std::string AppName = "MHP";
        return AppName;
    }
    //获取版本
    static std::string getAppVision()
    {
        std::string Vision = "Alpha-0.0.1";
        return Vision;
    }
private:
    static std::string AppName;
    static std::string Vision;
};

class Setting :AppInfo
{
    
};

//包的默认信息
struct PackInfo
{
    //包名
    char PackName[50] = "Test";
    //包标题
    char title[128] = "The Pack made of Minecraft Pack Helper";
    //包简介
    char Describe[256] = "这是一段默认的描述，如果你看到这个，证明你的配置文件没有写入正确";
    //包作者
    char PackAuthor[32] = "MHP";
    //包版本
    int PackVision[3] = { 0,0,1 };
    //包类型
    int PackType = RP;
    //最低游戏版本
    int minVision[3] = { 1,16,0 };
};