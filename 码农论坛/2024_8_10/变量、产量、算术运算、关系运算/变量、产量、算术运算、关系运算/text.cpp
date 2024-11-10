#include <iostream>

using namespace std;// using 指定命名空间缺省的关键字
#if 0 // #define：宏常量、大写命名；不可修改值

#include <iostream>         // 包含头文件。

#define MONTHS 12               // 一年中的月份数。
#define PI              3.14159    // 圆周率。

using namespace std;        // 指定缺省的命名空间。

// main函数，程序从这里开始执行，每个程序只能有一个main函数。
int main()
{
	const int days = 7;          // 一个星期中的天数。
	MONTHS = 19;

	cout << "一年有" << MONTHS << "个月。" << endl;
	cout << "圆周率的值是：" << PI << endl;

	cout << "一个星期有" << days << "天。\n";
}
#endif // 1

#if 0 // const 修饰变量不可以改值
int main()
{
	//const 数据类型 常量名 = 值
	const int age = 18;
	age = 19;
	cout << "他" << age << "岁了" << endl;

	return 0;
}
#endif // 1

#if 0 // 变量的自定义
int main()
{
	string name = "刘亦菲";
	int age = 18;
	double tz = 48.7;
	char sex = 'X';
	bool yz = true; // true = 1 = 漂亮，fasle = 0 = 不漂亮

	cout
		<< "姓名：" << name
		<< "，"
		<< "年龄：" << age
		<< "，"
		<< "体重：" << tz
		<< "，"
		<< "性别：" << sex
		<< "，"
		<< "颜值：" << yz
		<< endl;
	return 0;
}
#endif // 1

#if 0 // 输入数据
int main()
{
	//语法：std:cin >> 变量名；
	string name;
	cout << "请输入名字：";
	cin >> name;
	cout << "输入的名字是：" << name << endl;

	return 0;
}
#endif // 1

#if 0 // 算数运算
int main()
{
	int a = 0;
	int b = 0;
	cout << "请输入两个值：";
	cin >> a;
	cin >> b;
	cout << "它们的值是：" << (double)a / b << endl;

	return 0;
}
#endif // 1 

#if 0 // 自增和自减
int main()
{
	//int i = 1;      // i = 2
	//int j = i++; //  j = 1

	//int i = 1;      // i = 3
	//int j = i++; //  j = 1
	//j = ++i;		 //  j = 3

	int i = 1;      // i = 0  -1  0  1
	int j = i--;   //  j = 1
	j = --i;		 //  j = -1
	j = i++;		//   j = -1
	j = ++i;		//   j = 1

	cout << "  i  的值是： " << i << endl;
	cout << "  j  的值是： " << j << endl;

	return 0;
}
#endif // 1

#if 0 // 赋值运算
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	//c += a;  // c = c + a;   c = 40  a = 10
	//a += b; // a = a + b;   a = 30  b = 20
	//b += c; // b = b + c;   b = 60  c = 40

	a = b = c;
	a = b = c = 90;
	a = b = 10;

	cout << " a 的值是" << a << endl;
	cout << " b 的值是" << b << endl;
	cout << " c 的值是" << c << endl;

	return 0;
}
#endif // 1 

#if 0 // 初始化赋值
int main()
{
	int a = 10;
	int b(20);
	int c = { 30 };
	cout << " a 的值是" << a << endl;
	cout << " b 的值是" << b << endl;
	cout << " c 的值是" << c << endl;
	return 0;
}
#endif // 1
