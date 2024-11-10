#include <iostream>
using namespace std;

// sizeof运算符
#if 0
int main()
{
	cout << "sizeof(int)      = " << sizeof(int) << endl;
	cout << "sizeof(float)    = " << sizeof(float) << endl;
	cout << "sizeof(double)   = " << sizeof(double) << endl;
	cout << "sizeof(long)     = " << sizeof(long) << endl;
	cout << "sizeof(char)     = " << sizeof(char) << endl;
	cout << "sizeof(bool)     = " << sizeof(bool) << endl;


	return 0;
}
#endif // 1

// 整型的基本概念
#if 0
int main()
{
	// 一个位的取值是 0 1 1 = （2的1次方）- 1
	//	两个位的取值是 00 01 10 11 3 = （2的2次方） - 1
	//	三个位的取值是000 001 ...... 111 7 = （2的3次方） - 1
	short i = -32770; //  -32768 ~ 32767
	cout << "short i = " << i << endl;

	return 0;
}
#endif // 1

// 整数的书写
#if 0
int main()
{
	//在C++中，不要在十进制数前面加0，会被编译器当成八进制。
	//还有，不要随便删掉别人程序中整数前面的0，它不是多余的。
	// 1、二进制
	//	二进制由 0 和 1 两个数字组成，书写时必须以0b或0B（不区分大小写）开头。
	//以下是合法的二进制：
	int a = 0b101; // 换算成十进制为 5
	int b = -0b110010; // 换算成十进制为 -50
	int c = 0B100001; // 换算成十进制为 33
	//以下是非法的二进制：
	int m = 101010; // 无前缀 0B，相当于十进制
	int n = 0B410; // 4不是有效的二进制数字

	// 2、八进制
	//	八进制由 0~7 八个数字组成，书写时必须以0开头（注意是数字 0，不是字母 o）。
	//	以下是合法的八进制数：
	int a = 015; // 换算成十进制为 13
	int b = -0101; // 换算成十进制为 -65
	int c = 0177777; // 换算成十进制为 65535
	//以下是非法的八进制：
	int m = 256; // 无前缀 0，相当于十进制
	int n = 03A2; // A不是有效的八进制数字
	//3、十六进制
	//	十六进制由数字 0~9、字母 A~F 或 a~f（不区分大小写）组成，书写时必须以0x或0X（不区分大小写）开头。
	//	以下是合法的十六进制：
	int a = 0X2A; // 换算成十进制为 42
	int b = -0XA0; // 换算成十进制为 -160
	int c = 0xffff; // 换算成十进制为 65535
	//以下是非法的十六进制：
	int m = 5A; // 没有前缀 0X，是一个无效数字
	int n = 0X3H; // H不是有效的十六进制数字

	return 0;
}
#endif // 1

// C++11的long long类型
#if 0
int main()
{
	/*
		 在VS中，long是4字节，32位。    - 2147483648~2147483647
		在Linux中，long是8字节，64位。 - 9223372036854775808~9223372036854775807
		C++11标准增了long long类型的整数，至少64位，且至少与long一样长。
		在VS中，long long是8字节，64位。 - 9223372036854775808~9223372036854775807
		在Linux中，long和long long类型都是8字节，64位。
	*/

	return 0;
}
#endif // 1

// 浮点数(实数型)
#if 0
int main()
{
	// C++浮点型分三种：float（单精度）、double（双精度）、long double（扩展精度）。
	float			    a = 1.1f; cout << "float            a = " << a << endl;
	double         b = 1.2; cout << "double           b = " << b << endl;
	long double  c = 1.3; cout << "long double      c = " << c << endl;

	return 0;
}
#endif // 1

// 字符型的基本概念
#if 0
int main()
{
	// ASCLL码
	// 'X'  ->  88, 'a' -> 97, '3' -> 51
	int a = 'X'; cout << "a = '" << a << "' " << endl;
	char a1 = 88; cout << "a1 = '" << a1 << "' " << endl;

	return 0;
}
#endif // 1

// 转义字符
#if 0
int main()
{
	float			    a2 = 1.1f; cout << "float            a2 = " << a2 << endl;
	double         b2 = 1.2; cout << "double           b2 = " << b2 << endl;
	long double  c2 = 1.3; cout << "long double      c2 = " << c2 << endl;
	cout << endl;
	float a3 = 1.1f; cout << "\tfloat\t a3 = " << a3 << endl;
	double b3 = 1.2; cout << "\tdouble\t b3 = " << b3 << endl;
	long double c3 = 1.3; cout << "long double \t c3 = " << c3 << endl;
	cout << endl;
	cout << "dasbdfas\\fbsdbfbad" << endl;
	cout << "dasbdfas\afbsdbfbad" << endl;

	return 0;
}
#endif // 1

// C++11 的原始字面量
#if 1
int main()
{
	//语法：R"(字符串的内容)
	//	R"xxx(字符串的内容)xx"

	string path = "C:\Program Files\Microsoft OneDrive\tail\nation";
	string path2 = "C:\\Program Files\\Microsoft OneDrive\\tail\\nation";
	string path3 = R"(C:\Program Files\Microsoft OneDrive\tail\nation)";
	cout << "path is " << path << endl;
	cout << endl;
	cout << "path2 is " << path2 << endl;
	cout << endl;
	cout << "path3 is " << path3 << endl;
	cout << endl;
	string path4 = "<no>0001</no>\
		< name > 西施< / name>\
		<sc>火树银花< / sc>\
		<yz>沉鱼< / yz>\
		< age>23 < / age >\
		< weight>48.5 < / weight >\
		< height>170 < / height > )";
	cout << "string path4 = " << path4 << endl;
	cout << endl;
	string path5 =
		R"(
<no>0001</no>
<name>西施</name>l
<sc>火树银花</sc>
<yz>沉鱼</yz>
<age>23</age>
<weight>48.5</weight>
<height>170</height>
)";
	cout << "string path5 =" << path5 << endl;

	return 0;
}
#endif // 1
