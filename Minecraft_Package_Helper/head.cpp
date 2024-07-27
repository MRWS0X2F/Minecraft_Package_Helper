#include"language.h"
#include"head.h"
#include<conio.h>

std::string AppInfo::getAppName() {
	return AppName;
}

std::string AppInfo::getAppVision() {
	return Vision;
}

std::string AppInfo::getAppAuthor()
{
	return Author;
}

std::string AppInfo::getAppAddress()
{
	return Address;
}

void Settings::AppSetting(){
    std::cout << "******\t(1):" + language::getText("SetLanguang") << std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << language::getText("Function") << ":";
    while (true)
    {
        if (_getch() == 49)
        {
            system("cls");
            std::cout << "******\t(0):" + language::getText("zh_CN") << std::endl;
            std::cout << "******\t(1):" + language::getText("en_US") << std::endl;
            std::cout << "***************************************" << std::endl;
            std::cout << language::getText("ChooseLanguage") << ":";
            std::cin >> language::AppLanguage;
            if (std::cin.fail()){
                std::cin.clear();
                std::cin.ignore();
            }
            else
            {
                system("cls");
                break;
                return;
            }
        }
        else if (_kbhit() && _getch() != 1) {
            return;
        }
    }
}