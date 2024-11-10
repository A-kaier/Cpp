#include <iostream>
using namespace std;

// 字符串型
#if 0
int main()
{
	// C++风格字符串：string 变量名 = "字符串的内容"
	//	C 风格字符串 : char 变量名[] = "字符串的内容
	//	C++风格字符串的常用操作:	
		// 赋值:变量名 = "字符串的内容"
		// 拼接:变量名 = 变量名 + "字符串的内容一" + "字符串的内容一" + ... + "字符串的内容n"
	//比较：支持 == 、 != 、 > 和 < 关系运算符，常用的是 == 和 != 

	string a;
	a = "";
	cin >> a;
	cout << "a = " << a << endl;

	int b;
	b = 0;
	cin >> b;
	if (b == 12)
	{
		cout << "b = " << b << endl;
	}
	else
	{
		b = 1;
		cout << "b = " << b << endl;
	}

	return 0;
}
#endif // 1


// 布尔类型
#if 0
int main()
{
	// 布尔类型：0 和 1；
	// 布尔类型：true 和 false；
	// 布尔类型：真 和 假；

	bool a;
	cout << "请输入值：";
	cin >> a;
	cout << endl;
	if (a == 1)
	{
		cout << "a = " << a << endl;
	}
	else
	{
		cout << "a = " << a << "，牛逼" << endl;
	}

	return 0;
}
#endif // 1


// 数据类型的转换
#if 0
int main()
{
	char a = 30;
	int b = 102400;
	long long c = 15000000000001;
	// 如果一个表达式中出现了不同类型操作数的混合运算，较低类型将自动向较高类型转换。
	cout << "a+b+c=" << a + b + c << endl;
	// 当表达式中含有浮点型操作数时，所有操作数都将转换为浮点型。
	cout << "8/5=" << ((double)8) / 5 << endl;
	// 赋值运算的右值类型与左值类型不一致时，将右值类型提升/降低为左值类型。
	// 赋值运算右值超出了左值类型的表示范围，把该右值截断后赋给左值，所得结果可能毫无意义。
	int d = (int)23.59; // 降低了精度。
	cout << "d=" << d << endl;
	unsigned int e = (unsigned int)4294967295 + 10; // 值被截断，从高位截断
	cout << "e=" << e << endl;
	// 4294967295 11111111111111111111111111111111
	// 4294967296 000100000000000000000000000000000000
	// 4294967297 000100000000000000000000000000000001

	return 0;
}
#endif // 1

// 数据类型的别名 typedef
#if 0
int  main()
{
	/*
		创建数据类型的别名有两个目的：
			为名称复杂的类型创建别名，方便书写和记忆。
			创建与平台无关的数据类型，提高程序的兼容性。

		语法 : typedef 原数据类型名别名;

		C++11 还可以用 using 关键字创建数据类型的别名。

		语法 : using 别名 = 原数据类型名;
	*/

	// 1）为名称复杂的类型创建别名，方便书写和记忆。
	// 2）创建与平台无关的数据类型，提高程序的兼容性。
	//在VS中，short 是两个字节，int 是四个字节，long 也是四个字节，long long 是八个字节。
	typedef short     int16_t;// 16 位的整数。
	typedef int         int32_t;// 32 位的整数。
	typedef long      long int64_t; // 64 位的整数。
	//在Linux中，short是两个字节，int是四个字节，long 也是八个字节，long long 也是八个字节。
	typedef short     int16_t;// 16 位的整数。
	typedef int         int32_t;// 32 位的整数。
	typedef long      int64_t;// 64 位的整数。
	//在程序源代码中，只使用别名 int16_t、int32_t、int64_t，不使用原名。

	return 0;
}
#endif // 1
