#include <iostream>
using namespace std;
#include"swap.h"

//1、创建.h后缀名的头文件I
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义

int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	swap(a, b);

	/*命令行程序执行
		结束时暂停程序，等待用户按下任意键，以便用户能够查
		看程序的输出。这在调试或演示程序时非常有用，可以
		防止程序运行后直接结束导致输出不可见*/
	system("pause");

	return 0;
}
