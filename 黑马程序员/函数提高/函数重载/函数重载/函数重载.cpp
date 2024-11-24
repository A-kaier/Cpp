#include<iostream>
using namespace std;

 /*void func()
{
	cout << "func 的调用！" << endl;
}

void func(int a)
{
	cout << "func( int a ) 的调用！" << endl;
}

void func(double a)
{
	cout << "func( double a ) 的调用！" << endl;
}

void func(int a, double b)
{
	cout << "func( int a, double b ) 的调用！" << endl;
}

void func(double b, int a)
{
	cout << "func( double b, int a) 的调用！" << endl;
}*/

//函数返回值不可以作为函数重载条件
 /*int func(double a, int b)
{
	cout << "func (double a ,int b)的调用！" << endl;
}*/

 /*int main()
{
	func();
	func(666);
	func(66.66);
	func(666, 66.66);
	func(66.66, 666);

	system("pause");
	return 0;
}*/

//函数重载注意事项
//1、引用作为重载条件
void func(int& a)
{
	cout << "func (int &a) 调用 " << endl;
}

void func(const int& a)
{
	cout << "func (const int &a) 调用 " << endl;
}

//2、函数重载碰到函数默认参数
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a) 调用" << endl;
}

int main() {

	int a = 10;func(a); //调用无const

	func(10);//调用有const

	//func2(10); //碰到默认参数产生歧义，需要避免

	system("pause");

	return 0;
}

