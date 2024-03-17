#include"head.h"
using namespace std;

int main()
{
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
        cout << "***************************************" << endl;
        cout << language::getText("Function") << ":";
        cin >> choose;
        if (choose<=1)
        {
            system("cls");
            Setting::AppSetting();
        }
        system("pause");
        //cout<<<<
        //cout<<<<
        //cout<<<<
        //cout<<<<
    }
    system("pause");
    return 0;
}