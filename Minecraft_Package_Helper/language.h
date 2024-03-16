#include<string>
#include<iostream>
#include<fstream>
using namespace std;

class language
{
public:
	static int AppLanguage;
	static string getText(const string text)
	{
		int AppLanguage = 0;
		string FileName[64] = {"zh_CN.lang","en_US.lang"};
		string tmp;
		ifstream languageFile("./lib/language/" + FileName[AppLanguage]);
		if (languageFile.is_open())
		{
			while (getline(languageFile, tmp))
			{
				cout << tmp << endl;
			}
		}
		else {
			cout << "Can't read " + FileName[AppLanguage] << endl;
			return NULL;
		}
		return tmp;
	}

private:
	static string FileName;
	char TmpTextList1[1000][1000];
	char TmpTextList2[1000][1000];
};
