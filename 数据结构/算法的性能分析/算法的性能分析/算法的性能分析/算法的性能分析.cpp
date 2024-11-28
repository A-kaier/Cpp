#include <iostream>	
using namespace std;

// swap交换函数

int main()
{
	int n = 0;
	int a[101];
	cout << "请输入整数："; cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int j = n - 1; j > 0; j--)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]); // swap交换函数
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}

