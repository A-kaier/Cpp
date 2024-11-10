#include <iostream>
//主程序：main函数，程序的核心流程，需要用#include"头文件名“把头文件包含进来
#include "tools.h"
#include "girls.h"
using namespace std;

// 函数参数的传递
#if 0
int main1(int a, int b);
void func(int no, string str); // 向超女表白的函数。
int main()
{
	//实参：调用者程序中书写的在函数名括号中的参数，可以是常量、变量和表达式。
	//形参：函数的参数列表。

	int bh = 3; // 超女的编号。
	string message = " 我是一只傻傻鸟。";//向超女表白的内容。
	// func(bh, message);// 调用向超女表白的函数。
	// func(7,"小姐姐好漂亮哟。");// 调用向超女表白的函数。
	int no = 7;
	string str = "小姐姐好漂亮哟。";
	no = 5; str = "我有一只小小鸟。";
	cout << "亲爱的" << no << "号：" << str << endl;
	cout << "亲爱的" << bh << "号：" << message << endl;

	cout << " a + b = " << main1(1, 1) << endl;
}

int main1(int a, int b)
{
	return (a + b - a + b) * 2;
}

void func(int no, string str)
{
	// 向超女表白的函数。
	no = 5; str = "我有一只小小鸟。";
	cout << "亲爱的" << no << "号：" << str << endl;
}


#endif // 1

// 函数分文件编写
#if 0
int main()
{
	//头文件（* .h）：需要包含的头文件，声明全局变量，函数的声明，数据结构和类的声明等。
	//	源文件（* cPP）：函数的定义、类的定义。

	cout << "max(10 ,20)" << max(10, 20) << endl;
	cout << "min(20 ,10)" << min(20, 10) << endl;
	print(3, "我是一只傻傻鸟");

	return 0;
}
#endif // 1

// 调试代码
#if 0
int main()
{
	// F9设置 / 取消断点。
	//	F5 / F10开始调试。
	//	Shift + F5放弃调试。
	//	F10逐过程执行。
	//	F11逐语句执行（可进入函数内部）。
	//	局部变量窗口显示了变量的值，也可以修改。

	return 0;
}
#endif // 1

// 递归函数
#if 1
int f(int x);
int f(int x)
{
	if (x == 0)
	{
		return 0;
	}
	return x + f(x - 1);
}

int main()
{
	//递归函数中一定要有递归终止的条件，否则是死递归
	cout << "f(100)= " << f(100) << endl;
	// 利用for循环写出计算从 1 加到100的和。
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	cout << "sum = " << sum << endl;
	return 0;
}
#endif // 1
