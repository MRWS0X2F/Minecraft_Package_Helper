#include"head.h"
#include"language.h"
using namespace std;

int main()
{
    cout<<AppInfo::getAppName()<< endl;
    cout << language::getText("App") << endl;
    system("pause");
    return 0;
}