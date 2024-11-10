#include <iostream>

using namespace std;

int main()
{
	//动态创建一维数组的语法：数据类型* 指针 = new 数据类型[数组长度];
	//释放一维数组的语法：delete[] 指针;

	int* arr = new int[8];
	for (int i = 0; i < 8; i++)
	{
		arr[i] = 100 + i;
		cout << i <<"   " << arr + i;

	}
	delete[] arr;
	return 0;
}