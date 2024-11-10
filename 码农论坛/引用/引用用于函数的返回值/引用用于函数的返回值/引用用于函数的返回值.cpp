#include<iostream>
using namespace std;

/*
如果返回局部变量的引用，其本质是野指针，后果不可预知。
可以返回函数的引用形参、类的成员、全局变量、静态变量。
返回引用的函数是被引用的变量的别名，将const用于引用的返回类型。
const 引用：使用 const 修饰引用，禁止通过该引用修改原变量的值。*/

int func1(int a)
{
	int i = 3;
	return i;
}

const int& func2(int& ra)    // 返回的是引用。
{
	ra++;
	cout << "ra的地址是：" << &ra << "，ra=" << ra << endl;
	return ra;
}


int main()
{
	/*int a = 0;
	int b = func1(a);
	cout << b << endl; // 返回的是引用。*/

	int a = 3;
	const int& b = func2(a);      // 返回的是引用。

	cout << " a的地址是：" << &a << "， a=" << a << endl;
	cout << " b的地址是：" << &b << "， b=" << b << endl;

	//func2(a) = 10;             // 返回引有的函数是被引用的变量的别名。
	cout << " a的地址是：" << &a << "， a=" << a << endl;
	cout << " b的地址是：" << &b << "， b=" << b << endl;
	return 0;
}