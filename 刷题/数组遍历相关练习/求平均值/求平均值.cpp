#include <iostream>
#include <iomanip> 
using namespace std;

//给定一个包含n个整数的数列，编写一个程序，计算并输出这些数的平均值（保留到小数点后两位）。
//输入格式：
//第一行-个整数n；
//第二行n个不超过1000的正整数。
//输出格式：
//一行一个浮动数，表示这些数的平均值，保留两位小数。

int main()
{
	int n = 0; // 输入4 
	cin>>n; // 输入10 20 30 40 
	double nums_a = 0;
	
	for(int i = 0;i < n;i++)
	{
		int nums;
		cin>>nums;
		
		nums_a += nums; 
		
	}
	// 计算平均值
	 double pinjun =  nums_a / n;
	 cout<<fixed<<setprecision(2)<<pinjun<<endl; 

	
	return 0;
}

