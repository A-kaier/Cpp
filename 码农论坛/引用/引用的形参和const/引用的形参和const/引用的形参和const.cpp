#include <iostream>
using namespace std;

/*如果函数的实参不是左值或与const引用形参的类型不匹配，
那么C++将创建正确类型的匿名变量，将实参的值传递给匿名变量，并让形参来引用该变量。*/

void func1(int no, string str)
{
	cout << "亲爱的" << no << "号" << str << endl;
}

void func2(const int* no, const string* str)
{
	cout << "亲爱的" << *no << "号" << *str << endl;
}

void func3(const int& no, const string& str)    // 传引用。
{
	cout << "亲爱的" << no << "号：" << str << endl;
}
int main()
{
	int bh = 3;      // 超女的编号。
	string message = "我是一只傻傻鸟。";          // 向超女表白的内容。

	func1(8, "我是一只小小鸟。");
	func2(8, "我是一只小小鸟。");
	func3('X', "我是一只小小鸟。");
	//func1(bh, message);                  // 传值。
	//func2(&bh, &message);            // 传地址。
	//func3(bh, message);                  // 传引用。

	//cout << "亲爱的" << bh << "号：" << message << endl;


	return 0;
}