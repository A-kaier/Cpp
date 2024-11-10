#include <iostream>
using namespace std;

int main()
{

	int a[5] = { 3,6,5,8,9 };
	//for (int ii = 0; ii < 5; ii++)
	//{
	//	cout << "a[" << ii << "]的值是:" << a[ii] << endl;
	//}

	//for (int ii = 0; ii < 8; ii++)
	//{
	//	cout << "a[" << ii << "]的值是:" << a[ii] << endl;
	//}

	for (int ii = 0; ii < 10; ii++)
	{
		a[ii] = ii + 100; // 数组越界
		cout << "a[" << ii << "]的值是:" << a[ii] << endl;
	}

	int* p = a;
	//for (int ii = 0; ii < 5; ii++)
	//{
	//	cout << "*(p+" << ii << ")的值是:" << *(p + ii) << endl;
	//}

	for (int ii = 0; ii < 8; ii++)
	{
		cout << "*(p+" << ii << ")的值是:" << *(p + ii) << endl;
	}

	return 0;
}