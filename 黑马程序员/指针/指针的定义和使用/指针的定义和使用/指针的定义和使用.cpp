#include<iostream>
using namespace std;

int main()
{
	//1、指针的定义
		/*定义整型变量a*/
	int a = 10;
	//指针定义语法：数据类型*变量名；
	int* p;
	//指针变量赋值
	/*指针指向变量a的地址*/
	p = &a;
	//打印数据a的地址
	cout << "a的地址为：" << &a << endl;
	//打印指针变量p
	cout << "p的地址为：" << p << endl;
	//2、指针的使用
		//通过*操作指针变量指向的内存
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "p = " << *p << endl;

	system("pause");

	return 0;
}