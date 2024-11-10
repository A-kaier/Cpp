#include <iostream>
using namespace std;
int main()
{
	/*
		1）指针的算术
			将一个整型变量加 1 后，其值将增加 1。
			但是，将指针变量（地址的值）加 1 后，增加的量等于它指向的数据类型的字节数。
		2）数组的地址
			a）数组在内存中占用的空间是连续的。
			b）C++将数组名解释为数组第 0 个元素的地址。
			c）数组第 0 个元素的地址和数组首地址的取值是相同的。
			d）数组第 n 个元素的地址是：数组首地址+n
			e）C++编译器把 数组名[下标] 解释为 *(数组首地址+下标)
		3）数组的本质
			数组是占用连续空间的一块内存，数组名被解释为数组第 0 个元素的地址。C++操作这块内存有两
			种方法：数组解释法和指针表示法，它们是等价的。
		4）数组名不一定会被解释为地址
			在多数情况下，C++将数组名解释为数组的第 0 个元素的地址，但是，将 sizeof 运算符用于数据名
			时，将返回整个数组占用内存空间的字节数。
			可以修改指针的值，但数组名是常量，不可修改。
	*/

	char a; cout << "sizeof(char)=" << sizeof(char) << endl; // 1 字节
	short b; cout << "sizeof(short)=" << sizeof(short) << endl; // 2 字节
	int c; cout << "sizeof(int)=" << sizeof(int) << endl; // 4 字节
	double d; cout << "sizeof(double)=" << sizeof(double) << endl; // 8 字节
	cout << "a 的地址是：" << (void*)&a << endl;
	cout << "a 的地址+1 是：" << (void*)(&a + 1) << endl;
	cout << "b 的地址是：" << (void*)&b << endl;
	cout << "b 的地址+1 是：" << (void*)(&b + 1) << endl;
	cout << "c 的地址是：" << (void*)&c << endl;
	cout << "c 的地址+1 是：" << (void*)(&c + 1) << endl;
	cout << "d 的地址是：" << (void*)&d << endl;
	cout << "d 的地址+1 是：" << (void*)(&d + 1) << endl;

	double a[5];
	cout << "a 的值是：" << (long long)a << endl;
	cout << "&a 的值是：" << (long long)&a << endl;
	cout << "a[0]的地址是：" << (long long)&a[0] << endl;
	cout << "a[1]的地址是：" << (long long)&a[1] << endl;
	cout << "a[2]的地址是：" << (long long)&a[2] << endl;
	cout << "a[3]的地址是：" << (long long)&a[3] << endl;
	cout << "a[4]的地址是：" << (long long)&a[4] << endl;
	double* p = a;
	cout << "p 的值是：" << (long long)p << endl;
	cout << "p+0 的值是：" << (long long)(p + 0) << endl;
	cout << "p+1 的值是：" << (long long)(p + 1) << endl;
	cout << "p+2 的值是：" << (long long)(p + 2) << endl;
	cout << "p+3 的值是：" << (long long)(p + 3) << endl;
	cout << "p+4 的值是：" << (long long)(p + 4) << endl;

	int a[5] = { 3 , 6 , 5 , 8 , 9 };
	// 用数组表示法操作数组。
	cout << "a[0]的值是：" << a[0] << endl;
	cout << "a[1]的值是：" << a[1] << endl;
	cout << "a[2]的值是：" << a[2] << endl;
	cout << "a[3]的值是：" << a[3] << endl;
	cout << "a[4]的值是：" << a[4] << endl;
	// 用指针表示法操作数组。
	int* p = a;
	cout << "*(p+0)的值是：" << *(p + 0) << endl;
	cout << "*(p+1)的值是：" << *(p + 1) << endl;
	cout << "*(p+2)的值是：" << *(p + 2) << endl;
	cout << "*(p+3)的值是：" << *(p + 3) << endl;
	cout << "*(p+4)的值是：" << *(p + 4) << endl;

	return 0;
}