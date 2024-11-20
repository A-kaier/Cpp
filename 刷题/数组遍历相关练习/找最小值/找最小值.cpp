#include <iostream>
using namespace std;

// 给定一个包含n个整数的数列，要求编写一个程序，找出这些数中的最小值。

//输入格式：
//第一行 1 个整数n;
//第二行 n 个不超过1000的正整数。
//输出格式：

//一行一个整数，表示输入的n个正整数的最小值。

int main()
{
	int n;
	cin>>n;
	
	int min_nums;
	cin>>min_nums;
	for(int i = 1;i < n;i++)
	{
		int num;
		cin>>num;
		
		if(num < min_nums)
		{
			min_nums = num;
		}
	}
	cout<<min_nums<<endl;
	
	return 0;
} 




