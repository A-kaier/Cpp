#include<iostream>
#include<vector>
using namespace std;

//  二维数组
void main1()
{
	// 二维数组
	vector<vector<int>> arr(5, vector<int>(3, 6));
	// 打印二位数组
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

// 三维数组
void main2()
{
	vector<vector<vector<int>>>arr(5, vector<vector<int>>(6, vector<int>(2, 10))); // 6 * 2 = 12 打印12列
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			for (int ij = 0; ij < arr[i][j].size(); ij++)
			{
				cout << arr[i][j][ij] << " ";
			}
		}
		cout << endl;
	}
}

// 尾接 & 尾删
void main3()
{
	//尾接 ：自命名.push_back(元素)：在 vector 尾接一个元素，数组长度 +1.
	vector <int>arr(3, 5);
	arr.push_back(1);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	// 尾删 ：自命名.pop_back()：删除 vector 尾部的一个元素，数组长度 −1
	vector <int>arr1(6, 1);
	arr1.pop_back();
	arr1.push_back(2);

	for (int i = 0; i < arr1.size(); i++)
	{
		cout << "打印前：" << arr1[i] << " ";
	}
	cout << endl;
}

// 清空 及 判空
void main4()
{
	// 清空
	vector<vector <int>> arr(0, vector<int>(2, 3)); // “0” 为：行，"2" 为：列，"3" 为 初始值
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	//arr.clear();// 清空 vector
	//cout << "什么都没有" << endl;

	 // 判空
	if (arr.empty())
	{
		cout << "它是空值" << endl;
	}
	else
	{
		cout << "它不是空值" << endl;
	}



}

// 改变长度
 /*自命名.resize ：改变的是行
修改后的(修改的是 vector 的长度) ：
如果是扩大，且指定了默认值，则新元素均为默认值（旧元素不变）
如果是缩短，则删除多余的值*/
void main5()
{
	vector <int>arr(3, 5);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "打印前的值为：" << arr[i] << endl;
	}
	cout << "修改前长度为：" << arr.size() << endl;

	cout << endl;

	arr.resize(5, 10);
	cout << "修改后长度为：" << arr.size() << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "打印后的值为：" << arr[i] << endl;
	}
}

// 注意事项
void main6()
{
	/*
		vector<vector<int>> mat(n + 10, vector<int>(m + 10)) // 不会爆栈
	*/

	// 提前指定长度
	/*如果长度已经确定，那么应当直接在构造函数指定长度，
		而不是一个一个.push_back().因为 vector 额外内存耗尽后的重分配是有时间开销的，
		直接指定长度就不会出现重分配了。*/

		// 优化前: 522ms
	vector<int> a;
	for (int i = 0; i < 1e8; i++)
		a.push_back(i);
	// 优化后: 259ms
	vector<int> a(1e8);
	for (int i = 0; i < a.size(); i++)
		a[i] = i;

	//当心 size_t 溢出
	/*vector 获取长度的方法.size() 返回值类型为 size_t，
		通常 OJ 平台使用的是 32 位编译器（有些平台例如 cf 可选 64 位），
		那么该类型范围为[0，232).*/

	vector<int> a(65536);
	long long a = a.size() * a.size(); // 直接溢出变成0了
}

int main()
{
	// 二维数组
	//main1(); 

	// 三维数组
	//main2();

	// 尾接 & 尾删
	//main3();

	// 清空及判空
	//main4();

	// 改变长度
	//main5();

	// 注意事项
	//main6();

	system("pause");
	return 0;
}