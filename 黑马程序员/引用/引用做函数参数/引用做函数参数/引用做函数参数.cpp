#include<iostream>
using namespace std;

/*
作用： 函数传参时，可以利用引用的技术让 形参 修饰 实参
优点： 可以简化指针修改实参
*/



//1. 值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2. 地址传递
void  mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. 引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 10;

	mySwap01(a, b);
	cout << "a：" << a << "，" << " b：" << b << endl;

	mySwap02(&a, &b);
	cout << "a：" << a << "，" << " b：" << b << endl;

	mySwap03(a, b);
	cout << "a：" << a << "，" << " b：" << b << endl;

	system("pause");
	return 0;
}