#define _CRT_SECURE_NO_WARNINGS
#include <iostream>         // 包含头文件。
using namespace std;        // 指定缺省的命名空间。

int main()
{
	char name[11];

	memset(name, 0, sizeof(name));
	// name[0] = 0;
	// strcpy(name, "hello");
	strncpy(name, "hello", 5);

	cout << "name=" << name << endl;

	cout << "name[0]=" << (int)name[0] << endl;
	cout << "name[1]=" << (int)name[1] << endl;
	cout << "name[2]=" << (int)name[2] << endl;
	cout << "name[3]=" << (int)name[3] << endl;
	cout << "name[4]=" << (int)name[4] << endl;
	cout << "name[5]=" << (int)name[5] << endl;
	cout << "name[6]=" << (int)name[6] << endl;
	cout << "name[7]=" << (int)name[7] << endl;
	cout << "name[8]=" << (int)name[8] << endl;
	cout << "name[9]=" << (int)name[9] << endl;
	cout << "name[10]=" << (int)name[10] << endl;
}
