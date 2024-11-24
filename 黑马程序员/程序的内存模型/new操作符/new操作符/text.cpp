#include <iostream>
using namespace std;

int* func()
{
	int* a = new int(10);
	return a;
}

// 基本语法
 /*int main()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	//利用delete释放堆区数据
	delete p;
	cout << *p << endl;

	system("pause");
	return 0;
}*/

int main()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}