#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include"json.h"
#include"language.h"
using namespace std;
using namespace Json;

class Config
{
public:
    //读json
    static string getDataFormConfig_string(const string text)
    {
        ifstream config("./config.json");
        Reader rd;
        Value root;
        rd.parse(config, root);
        return root[text].asString();
    }
    static int getDataFormConfig_int(const string text)
    {
        ifstream config("./config.json");
        Reader rd;
        Value root;
        rd.parse(config, root);
        return root[text].asInt();
    }
};