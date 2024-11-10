#include <iostream>
using namespace std;

/*
	把 int* 当成一种数据类型就是了。
	int* ：
	这是一个类型声明，表示类型为“指向整型的指针”。
	当你声明一个变量时，int* 告诉编译器这个变量是一个指向 int 类型的指针。
	例如，int* ptr; 声明了一个名为 ptr 的指向整型的指针。

	* a：
	这是一个解引用操作符，* 用于访问指针 a 所指向的内存地址中的值。
	当* a 出现在声明中时，它不是一个类型声明，而是对前面声明的指针变量 a 进行解引用。
	例如，如果前面已经声明了 int* a; ，那么* a 就是用来获取或修改 a 指向的整数值。
	因此，当你在同一行使用 int*, * a; 时，这是一个无效的声明，编译器会报错。这是因为：

	int* 告诉编译器接下来的变量应该是整型指针。
	* a 试图对 a 进行解引用，但 a 还没有被声明为一个指针。
*/


// 指针的基本概念
// 遇到指针乱码的情况：
// 1.在 &a 前面加上 void(*)
// 2.强制转换为整形(long long)：8个字节，转化为（int）只有四个字节，不够
#if 0
int main()
{
	// C++用运算符 & 获取变量在内存中的起始地址。
	// 语法：& 变量名
	//int a, b, c, d;
	//cout << "变量 a 的地址是：" << &a << endl;
	//cout << "变量 b 的地址是：" << &b << endl;
	//cout << "变量 c 的地址是：" << &c << endl;
	//cout << "变量 d 的地址是：" << &d << endl;
	//指针变量简称指针，它是一种特殊的变量，专用于存放变量在内存中的起始地址。
	// 语法：数据类型* 变量名；
	//int* a2;
	//cout << &a2 << endl;
	// 自定义数据类型指针存放自定义数据类型变量的地址。
	//	语法：指针 = &变量名；
	//int* ab = &a; // &：取a的地址符
	//cout << "变量 a 的地址是：" << &a << endl;
	//cout << "变量 a 的地址是：" << (int)&a << endl;
	//cout << "变量 a 的地址是：" << (char)&a << endl;
	//cout << "变量 a 的地址是：" << (long long)&a << endl;
	//cout << "变量 a 的地址是：" << (double)&a << endl;
	// <<---------------------分割线------------------------->>
	//int a;
	//int b;
	//cout << "变量 a 的地址是：" << (long long)&a << endl;
	//cout << "变量 b 的地址是：" << (long long)&b << endl;
	//int *aa = &a;
	//int*bb = &b;
	////int* bb = &b;
	//cout << "变量 aa 的地址是：" << (long long)aa << endl;
	//cout << "变量 bb 的地址是：" << (long long)bb << endl;
	// <<---------------------分割线------------------------->>
	// 强制转换类型，强制转换会有风险
	int a;
	char b;
	// int* aa = &b; // 会报错
	// char* bb = &a;// 会报错
	int* aa = (int*)&b;
	char* bb = (char*)&a;



	return 0;
}
#endif // 1

// 使用指针
#if 1
int main()
{
	int a = 3;
	int* p = &a;
	int* p1 = &a;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	//cout << "*p1=" << *p1 << endl;
	//cout << endl;
	//a = 8;
	//cout << "a=" << a << endl;
	//cout << "*p=" << *p << endl;
	//cout << "*p1=" << *p1 << endl;
	//cout << endl;
	//cout << "&a=" << &a << ",p1=" << p1 << ",p=" << p << endl;
	// <<---------------------分割线------------------------->>

	// 解引用：*运算符被称为间接值或解除引用（解引用）运算符，将它用于指针，可以得到该地址的内存中存储
	// 的值，* 也是乘法符号，C++根据上下文来确定所指的是乘法还是解引用。 
	// cout<<"a = "<<*a<<endl; 中：“ *a ”：就是解引用

	//int a = 3;
	//int* p = &a;
	////*p = 8; // = 8 8 8 8 
	//cout << "a = " << a << endl;
	//cout << "b = " << *p << endl;
	//*p = 8; //   = 3 3 8 8
	//cout << "a = " << a << endl;
	//cout << "b = " << *p << endl;


	return 0;
}
#endif // 1

// 指针用于函数的参数
#if 0
int main()
{
	cout << sizeof(string) << endl;
	int a = 180, b = 170, c = 175, m, n;
	//func1(a, b, c & m, &n);
	cout << "m=" << m << ",n=" << n << endl;

	int bh = 3;
	string message = "我是一只傻傻鸟。";

	//func1(&bh, &message);
	{
		int* no = &bh;
		string* str = &message;

		int no = bh;
		string* str = &message;

		cout << "亲爱的" << *no << "号：" << *str << endl;
		*no = 8;
		*str = "我是一只小小鸟。";

	}

	return 0;
}
#endif // 1

// 用 const 修饰指针
#if 0
int main()
{
	/*
		1）常量指针
		语法：const 数据类型* 变量名;
		指针指向可以改，指针指向的值不能改
	*/
	int a = 3, b = 8;
	//const int* p = &a;
	//*p = 13; // 报错
	//a = 13;
	//cout << "a = " << a << "，p = " << *p << endl;
	//p = &b;
	//cout << "b = " << b << "，p = " << *p << endl;
	// <<---------------------分割线------------------------->>
	/*
		函数：void func1(int *no, string *yes){ return 0；}
		声明函数时：一定要加上const:
				  void func1(const int *no, const string *yes)

		其中：void func1 里面的声明是 ：形参
		  int main{ int a = 10; func1(a) } 中 “ a ” 是：实参
	*/
	// <<---------------------分割线------------------------->>
	/*
		2）指针常量
		数据类型 * const变量名
		指针指向不可以改，指针指向的值可以更改。
	*/
	//int* const p; // 不赋值会报错
	int* const p = &a;
	*p = 13;
	cout << "a=" << a << " * p = " << p << endl;
	// <<---------------------分割线------------------------->>
	/*
		3）常指针常量
		指针指向不可以改，指针指向的值不可以更改。

		不用管！！！
	*/

	return 0;
}
#endif // 1


// void 关键字
#if 0

void func(string varname, void* p)
{
	cout << varname << "的地址是：" << p << endl;
	cout << varname << "的值是：" << *(char*)p << endl;
}

int main()
{
	/*
	1）函数的返回值用 void，表示函数没有返回值。
		void func(int a, int b)
	{
		// 函数体代码。
		return;
	}
	2）函数的参数填 void，表示函数不需要参数（或者让参数列表空着）。
		int func(void)
	{
		// 函数体代码。
		return 0;
	}
	3）的形参用 void* ，表示接受任意数据类型的指针。

	注意：
			不能用 void 声明变量，它不能代表一个真实的变量，但是，用 void *可以。
			不能对 void *指针直接解引用（需要转换成其它类型的指针）。
			把其它类型的指针赋值给 void*指针不需要转换。
			把 void *指针赋值给把其它类型的指针需要转换。

	*/

	// 只关心地址本身，不关心里面的内容，用 void *可以存放任意类型的地址。
  // 显示变量的十六进制地址的函数：varname-变量名，p-变量的地址。

		int a = 89;
		char b = 'X';
		cout << "a 的地址是：" << &a << endl;
		cout << "b 的地址是：" << &b << endl;
		func("a", &a);
		func("b", &b);

	return 0;
}
#endif // 1
