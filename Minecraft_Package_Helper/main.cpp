#include"language.h"
#include"head.h"
#include<conio.h>
//#include"UUID.h"
using namespace std;

//获取当前语言的文字

std::string AppInfo::AppName = language::getText("Welcome");
std::string AppInfo::Vision = language::getText("Vision") + ":0.0.1";
std::string AppInfo::Author = language::getText("Author") + ":MRWS0X2F";
std::string AppInfo::Address = language::getText("Address") + ": https://github.com/MRWS0X2F/Minecraft_Package_Helper/";

int main()
{
    //PackUUID::Verify_UUID("91FCA1D9-E1A4-4153-B2E4-60501CA0D2BA");
    //使用UTF-8，防止乱码
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    cout << "***************************************" << endl;
    cout << "******\t" + AppInfo::getAppName() << endl;
    cout << "******\t" + AppInfo::getAppVision() << endl;
    cout << "******\t" + AppInfo::getAppAuthor() << endl;
    cout << "******\t" + AppInfo::getAppAddress() << endl;
    cout << "***************************************" << endl;
    while (true)
    {
        cout << "******\t(1):" + language::getText("AppSetting") << endl;
        cout << "******\t(2):" + language::getText("pack_js") << endl;
        cout << "******\t(3):" + language::getText("exit") << endl;
        cout << "******\t" + language::getText("configDir") << endl;
        cout << "***************************************" << endl;
        cout << language::getText("Function") << ":";
        while (true)
        {
            if (_kbhit() && _getch() == 49) {
                system("cls");
                Settings::AppSetting();
            }
            if (_kbhit() && _getch() == 27) {
                return 0;
            }
            
        }
        //cin >> choose;
        //if (cin.fail())
        //{
        //    cin.clear();
        //    cin.ignore();
        //    system("cls");
        //}
        //else {
        //    if (choose <= 1)
        //    {
        //        system("cls");
        //        //Settings::AppSetting();
        //    }
        //    else if (choose <= 2) {
        //        system("node ./lib/autopk.js");
        //        system("pause");
        //        system("cls");
        //    }
        //    else if (choose <= 3)
        //    {
        //        break;
        //    }
        //}
    }
    return 0;
}