#pragma once

#include<iostream>
#include<string>
#include<ctime>
#include<cstring>

class PackUUID
{
public:
	static std::string generating_UUID()
	{
		srand((unsigned int)time(NULL));
		std::string tmp;
		for (int i =0;i<=31;i++)
		{
			if (rand()%100<=25)
			{
				tmp.append(1,char(rand() % 6 + 97));
			}
			else
			{
				tmp.append(1,char(rand() % 10 + 48));
			}
		}
		tmp.insert(20, "-");
		tmp.insert(16, "-");
		tmp.insert(12, "-");
		tmp.insert(8, "-");
		return tmp;
	}
	static bool Verify_UUID(const std::string uuid)
	{
		if (uuid.size()!=36)
		{
			return false;
		}
		for (auto i=0;)
		{

		}
	}
};