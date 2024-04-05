#pragma once

#include"json.h"
#include<fstream>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
using namespace Json;

class Config
{
public:
    //读json
    static string getDataFormConfig_string(const string key)
    {
        ifstream config("./config.json");
        Reader rd;
        Value root;
        rd.parse(config, root);
        return root[key].asString();
    }
    static string getDataFormConfig_string(const string key,const string text)
    {
        ifstream config("./config.json");
        Reader rd;
        Value root;
        rd.parse(config, root);
        return root[key][text].asString();
    }
    static int getDataFormConfig_int(const string key)
    {
        ifstream config("./config.json");
        Reader rd;
        Value root;
        rd.parse(config, root);
        return root[key].asInt();
    }
    static int getDataFormConfig_int(const string key, const int head)
    {
        ifstream config("./config.json");
        Reader rd;
        Value root;
        rd.parse(config, root);
        if (root[key].size() >= 1)
        {
            return root[key][head].asInt();
        }
        else {
            return root[key].asInt();
        }
    }
    static int getDataFormConfig_int(const string key, const string text,const int head)
    {
        ifstream config("./config.json");
        Reader rd;
        Value root;
        rd.parse(config, root);
        if (root[key][text].size() >= 1)
        {
            return root[key][text][head].asInt();
        }
        else {
            return root[key][text].asInt();
        }
    }
};