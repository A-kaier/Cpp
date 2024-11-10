#include <iostream>
using namespace std;

#if 0
/*
	 如果要把 数组 传给函数，函数的声明如下：
	 void func(int (*p)[3], int len);
	 void func(int p[][3], int len);
*/

// 1.创建一个func的函数
void func(int(*p)[3], int len)
{
	// 2.写出行循环
	for (int i = 0; i < len; i++)
	{
		// 3.写出列循环
		for (int j= 0; j< 3; j++)
		{
			cout << "p[" << i << "][" << j << "] = " << p[i][j] << "  ";
			cout << endl;
		}
	}
}

int main()
{
	// 4.写一个2行3列的数组
	int sz[2][3] = { {11,12,13},{21,22,23} };
	// 5.调用func函数
	func(sz, 2);


	return 0;
}
#endif // 0
