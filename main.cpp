#include <iostream>
using namespace std;
#include <fstream>
using namespace std;
#include <string>
using namespace std;
#include <conio.h>

void main()
{
	bool flag_main = true;
	string path;
	char temp;
	while (flag_main)
	{
		system("cls");
		cout << "输入文件路径" << endl;
		cin >> path;

		ifstream ifs_main(path);
		if (ifs_main.good())
		{
			cout << "文件内容:" << endl << endl;
			while (ifs_main.good())
			{
				temp = ifs_main.get();
				switch (temp)
				{
				case '\t':cout << "\\t"; break;
				case '\n':cout << "\\n"; break;
				case '\"':cout << "\\\""; break;
				case '\'':cout << "\\\'"; break;
				case '\\':cout << "\\\\"; break;
				default:cout << temp; break;
				}
			}
		}
		else
		{
			cout << "路径有误" << endl;
		}


		cout <<endl <<endl<< "是否继续" << endl;
		cout << "y / Y / 1" << endl;
		temp = _getch();
		switch (temp)
		{
		case 'y':case 'Y':case '1':
			break;
		default:
			flag_main = false;
			break;
		}
	}
}
