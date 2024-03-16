#include"head.h"
#include"language.h"
using namespace std;

int main()
{
    while (true)
    {
        cout << "***************************************" << endl;
        cout << "******" + AppInfo::getAppName() << endl;
        cout << "******" + AppInfo::getAppVision() << endl;
        cout << "******" + AppInfo::getAppAuthor() << endl;
        cout << "******" + AppInfo::getAppAddress() << endl;
        cout << "***************************************" << endl;
        system("pause");
        //cout<<<<
        //cout<<<<
        //cout<<<<
        //cout<<<<
    }
    system("pause");
    return 0;
}