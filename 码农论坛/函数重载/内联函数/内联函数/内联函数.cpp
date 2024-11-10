#include<iostream>
using namespace std;

//  语法：在函数声明和定义前加上关键字inline。

inline void func1(const short bh, const string message)
{
	cout << "亲爱的" << bh << "号：" << message << endl;
}

int main()
{
	//func1(3, "我是一只傻傻鸟。");
	{
		int bh = 3;
		string message = "我是一只傻傻鸟。";
		cout << "亲爱的" << bh << "号：" << message << endl;
	}
	// func1(8, "我有一只小小鸟。");
	{
		int bh = 8;
		string message = "我有一只小小鸟。";
		cout << "亲爱的" << bh << "号：" << message << endl;
	}
	// func1(5, "我是一只小小鸟。");
	{
		int bh = 5;
		string message = "我是一只小小鸟。";
		cout << "亲爱的" << bh << "号：" << message << endl;
	}
	func1(520, "冰冰");
	{
		int bh = 10;
		string message = "我是大笔噶";
		cout << "亲爱的" << bh << "号：" << message << endl;
	}


	return 0;
}