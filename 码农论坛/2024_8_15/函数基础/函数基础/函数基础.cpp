#include <iostream> // 包含头文件。
using namespace std; // 指定缺省的命名空间。

// 函数的声明和定义
#if 0
// 写一个函数，给它两个整数，让它比较两个整数的大小，返回较大的那个整数。
int max(int a, int b); // 函数声明后面的分号不能少。
// 写一个函数，给它一个字符串，让它在控制台显示出来。
void print(string str);
// 写一个函数，在控制台输出九九乘法表。
void printmt();
int main()
{
}
int max(int a, int b) // 函数定义后面不能加分号。
{
	if (a > b) return a;
	return b;
}
void print(string str)
{
	cout << str << endl;
	return;
}
void printmt()
{
	// 在控制台输出九九乘法表。
	for (int ii = 1; ii <= 9; ii++)
	{
		for (int jj = 1; jj <= ii; jj++)
		{
			cout << ii << "*" << jj << "=" << ii * jj << " ";
		}
		cout << endl;
	}
	return;
}
#endif // 1

// 函数的调用
#if 0
//写一个函数，给它两个整数，让它比较两个整数的大小，返回较大的那个整数。
int max(int a, int b);
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

//写一个函数，在控制台输出九九乘法表
void jiujiu(); // 初始化函数
void jiujiu()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " * " << j <<" = " << i * j<<"  ";
		}
		cout << endl;
	}
	return;
}
int main()
{

	cout << "max(10,9)谁大？"<< max(10, 9)<<"最大" << endl;
	cout << endl;
	jiujiu();// 调用九九乘法表
	return 0;
}




#endif // 1

// 变量的作用域
#if 0
// 静态局部变量：static 修饰
int main()
{


	return 0;
}
#endif // 1

// 函数参数的传递
#if 1
int main()
{


	return 0;
}
#endif // 1
