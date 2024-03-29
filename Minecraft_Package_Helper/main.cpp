#include"head.h"
using namespace std;

int main()
{
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
        int choose = 0;
        cout << "******\t(1):" + language::getText("AppSetting") << endl;
        cout << "******\t(2):" + language::getText("pack_js") << endl;
        cout << "******\t(3):" + language::getText("exit") << endl;
        cout << "***************************************" << endl;
        cout << language::getText("Function") << ":";
        cin >> choose;
        if (int(choose)<=1)
        {
            system("cls");
            Settings::AppSetting();
        }else if (choose <= 2) {
            system("node ./lib/autopk.js");
            system("pause");
            system("cls");
        }
        else if (choose <=3)
        {
            break;
        }
    }
    return 0;
}