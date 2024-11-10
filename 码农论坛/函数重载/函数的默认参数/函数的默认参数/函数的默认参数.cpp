#include<iostream>
using namespace std;

//  语法：返回值 函数名(数据类型 参数 = 值, 数据类型 参数 = 值, ……);

void func(int a, const string& name = "西施", const string& message = "我喜欢你")
{
	cout << "亲爱的" << name << a << message << endl;
}

int main()
{
	func(3, "冰冰", "我是一只傻傻鸟");
	func(5);

	return 0;
}