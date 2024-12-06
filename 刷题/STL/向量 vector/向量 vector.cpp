#include<iostream>
#include<vector> 
using namespace std;

 /*题目 1: 简单的元素添加和移除
描述：编写一段代码，创建一个std::vector<int>，然后执行以下操作：
向向量中添加5个整数（1, 2, 3, 4, 5）。
打印出向量中的所有元素。
从向量尾部删除两个元素。
再次打印出向量中的所有元素。
提示：使用.push_back()添加元素，使用.pop_back()删除尾部元素，并通过循环和下标访问打印元素。*/

void main01()
{
	vector<int> arr;
	
	// 使用.push_back()添加5个整数（1, 2, 3, 4, 5）
	for(int i = 1;i <= 5;i++)
	{
		arr.push_back(i); 
	}
	// 打印出向量中的所有元素。
	for(int i = 0;i < arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// 从向量尾部删除两个元素。
	if(arr.size() >= 2) 
	{
		arr.pop_back();
		arr.pop_back();
	}
	// 再次打印出向量中的所有元素。
	for(int i = 0;i < arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
}

 /*题目 2: 使用指定大小和初始值构造向量
描述：创建一个含有10个元素的std::vector<int>，每个元素的初始值为10。然后遍历并打印每个元素。
提示：在构造函数中指定大小和初始值。*/
void main02()
{
	vector<int> arr(10,10);
	for(int i = 0;i < arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
}



int main()
{
//	main01();
//	main02();
	
	system("pause");
	return 0;
}



























