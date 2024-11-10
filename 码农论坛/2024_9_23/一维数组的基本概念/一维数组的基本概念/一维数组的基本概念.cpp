#include <iostream>
using namespace std;

/*
	1)创建数组
	声明数组的语法：数据类型 数组名[数组长度];
	数组长度必须是整数，可以是常量，也可以是变量和表达式。

	2)数组的使用
	语法：数组名[数组下标]

	3）数组占用内存的情况
	sizeof(数组名)

	4）数组的初始化
	声明的时候初始化：
		数据类型数组名[数组长度] ={值1.，值2，值 3，......, 值n);
		数据类型数组名[]={值1，值2，值3，......,值n）);
		数据类型数组名[数组长度]={0)； // 把全部的元素初始化为 0。
		数据类型数组名数组长度={ }; // 把全部的元素初始化为0.

	5）清空数组
	函数原型：void *memset(void*s,intc,sizen);
	注意，在Linux下，使用memcpy0函数需要包含头文件indlude<string.h>

	6）复制数组
	函数原型:void*memcpy(vid *dest, const void *src,sizen);
	注意，在Linux下，使用memcpy0函数需要包含头文件indlude<string.h>
*/


int main()
{
	int sz[10];
	sz[0] = 10;
	sz[1] = 20;
	sz[2] = 30;
	for (int i = 0; i < sz[i]; i++)
	{
		cout << sz[i] << " ";
	}
	cout << endl << endl;

	memset(sz, 0, sizeof(sz)); // 清空数组

	for (int i = 0; i < sz[i]; i++)
	{
		cout << sz[i] << " ";
	}

	int sz_0[sizeof(sz) / sizeof(int)];//  数组长度必须是整数，可以是常量，也可以是变量和表达式。
	memcpy(sz_0, sz, sizeof(sz));

	for (int i = 0; i < sizeof(sz_0) / sizeof(int); i++)
	{
		cout << sz[i] << " ";
	}

	cout << endl << endl;
	cout << sizeof(sz) / sizeof(int) << endl; // sz 数组的长度
	cout << endl;

	int sz2[5] = { 0,1,2,3,4 };
	int sz3[] = { 0,1,2,3,4,5 };
	cout << sizeof(sz3) / sizeof(int) << " "; // 求 sz3 的长度
	cout << endl << endl;

	int sz4[10] = { 0 };
	for (int i = 0; i < sizeof(sz4) / sizeof(int); i++)
	{
		cout << sz4[i] << " ";
	}
	cout << endl << endl;
	int sz5[5] = {};
	for (int i = 0; i < sizeof(sz5) / sizeof(int); i++)
	{
		cout << sz5[i] << " ";
	}

	return 0;
}