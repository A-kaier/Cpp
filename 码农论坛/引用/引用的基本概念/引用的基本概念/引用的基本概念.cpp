#include <iostream>
using namespace std;

// 声明 / 创建引用的语法：数据类型 & 引用名 = 原变量名;

int main()
{
	int a = 10;
	int& aa = a;

	cout << "a的地址是：" << &a << "，a的值是：" << a << endl;
	cout << "aa的地址是：" << &aa << "，aa的值是：" << aa << endl;

	aa = 90;

	cout << "a的地址是：" << &a << "，a的值是：" << a << endl;
	cout << "aa的地址是：" << &aa << "，aa的值是：" << aa << endl;

	return 0;
}