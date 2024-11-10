//#include<bits/stdc++.h> 
#include <iostream>
using namespace std;


/*案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
   例如数组：int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };*/

void maopao(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//swap(arr[j], arr[j + 1]); // 交换函数
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void dayin(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{

	//1、先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	//2、创建函数，实现冒泡排序
	maopao(arr, len);
	//3、打印排序后的数组
	dayin(arr, len);

	system("pause");
	return 0;
}

