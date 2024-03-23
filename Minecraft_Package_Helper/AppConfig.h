#pragma once

constexpr auto RP = 0;
constexpr auto BP = 1;
constexpr auto Addones = 2;

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"json.h"
#include"language.h"

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

//读json
Json::Value readconfig()
{
    ifstream Config("./config.json");
    Json::CharReaderBuilder ReaderBuilder;
    ReaderBuilder["emitUTF8"] = true;

    Json::Value root;

    string content;
    bool type = Json::parseFromStream(ReaderBuilder, Config, &root, &content);
    if (!type)
    {
        cout << "Can't load config.json" << endl;
    }
    return root;
}
Json::Value root;
string PackInfo::PackName = root.get("pack_name", "MPH pack").asString();
string PackInfo::title = root.get("title", "A Minecaft pack").asString();
string PackInfo::Describe = root.get("describe", "一个描述").asString();
string PackInfo::PackAuthor = root.get("author", "somebody").asString();
//int PackInfo::PackVision = root.get("packv", "somebody").asInt();
//int PackInfo::minVision = root.get("minv", "somebody").asInt();