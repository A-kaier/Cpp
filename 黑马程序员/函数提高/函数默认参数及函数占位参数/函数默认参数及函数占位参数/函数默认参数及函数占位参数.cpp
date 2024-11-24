#include<iostream>
using namespace std;
//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func(int a, int b = 10, int c = 10)
{
	return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a = 10, int b)
{
	return a + b;
}

void func3(int a, int) {
	cout << "this is func" << endl;
}

int main()
{
	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	func3(10, 10); //占位参数必须填补
	func3(10); //占位参数必须填补

	system("pause");
	return 0;
}