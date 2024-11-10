#include <iostream>
using namespace std;

// 一维数组的数学概念是线性表，二维数组的数学概念是矩阵。

#if 1
int main()
{
	// 1.声明一个两行三列的二维数组，存放超女的编号。
	int a[2][3] = { {11,12,13},{21,22,23} };
	// 2.第一层循环表示行数，循环继续的条件是计数器小于行数。
	for (int i = 0; i < 2; i++)
	{
		// 3.第二层循环表示列数，循环继续的条件是计数器小于列数。
		for (int j = 0; j < 3; j++)
		{
			// 4.打印处理二维数组的每个元素。
			cout << "a[" << i << "][" << j << "] = " << (long long)&a[i][j] << "  "; // 加上longlong变为纯数字
		}
		// 5.每处理一行数据后，输出一个换行。
		cout << endl;
	}
	cout << endl;
	// 6. 一维数组的数组表示法。 也就是打印二维数组 a 
	int* p = (int*)a;
	for (int i = 0; i < 6; i++)
	{
		cout << "p[" << i << "]=" << p[i] << endl;
	}

	return 0;
}
#endif // 0
#endif // 0