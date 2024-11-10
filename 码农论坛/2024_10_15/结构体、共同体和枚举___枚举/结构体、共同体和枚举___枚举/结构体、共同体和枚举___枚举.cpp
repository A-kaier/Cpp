#include<iostream>
using namespace std;

/*枚举是一种创建符号常量的方法。
枚举的语法：
	enum 枚举名 { 枚举量1, 枚举量2, 枚举量3, ......, 枚举量n };
例如：
	enum colors { red, yellow, blue };*/

int main()
{
	// 创建枚举类型colors
	enum en_a1
	{
		red = 0, yellow = 1, blue = 2, other = 3
	};
	// 创建枚举变量，并赋初始值。


	en_a1 cc = red;
	cout
		<< "red=" << red
		<< ",yellow=" << yellow
		<< ",blue=" << blue
		<< ",other=" << other
		<< endl;

	switch (cc)
	{
	case red:
		cout << "红色。\n";
		break;
	case yellow:
		cout << "黄色。\n";
		break;
	case blue:
		cout << "蓝色。\n";
		break;
	default:
		cout << "未知。\n";
		break;
	}

	return 0;
}