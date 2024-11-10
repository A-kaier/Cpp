#include <iostream>				// 包含头文件。
using namespace std;				// 指定缺省的命名空间。

// 指针练习
#if 0
int main()
{
	int arr0 = 13;
	int* arr1 = &arr0;
	cout << *arr1 << endl;
	int arr2 = 1;
	cout << (*arr1) + (arr2) << endl;

	return 0;
}
#endif // 1

// C++内存模型
#if 0

/*
	栈和堆的主要区别：
		1）管理方式不同：栈是系统自动管理的，在出作用域时，将自动被释放；堆需手动释放，若程序中
		不释放，程序结束时由操作系统回收。
		2）空间大小不同：堆内存的大小受限于物理内存空间；而栈就小得可怜，一般只有 8M（可以修改
		系统参数)。
*/

#endif // 1

// 动态分配内存 new 和 delete
#if 0

// 申请内存的语法：new 数据类型(初始值); // C++11 支持{}
// 释放内存的语法：delete 地址;

int main()
{
	int* a = new int(5);
	cout << *a << endl;
	*a = 10;
	cout << *a << endl;

	// 1）声明一个指针；
	// 2）用 new 运算符向系统申请一块内存，让指针指向这块内存；
	// 3）通过对指针解引用的方法，像使用变量一样使用这块内存；
	// 4）如果这块内存不用了，用 delete 运算符释放它。
	// 申请内存的语法：new 数据类型(初始值); // C++11 支持{}
	// 释放内存的语法：delete 地址;
	int* p = new int(5);
	cout << "*p=" << *p << endl;
	*p = 8;
	cout << "*p=" << *p << endl;
	delete p;
	/*
		for (int ii = 1; ii > 0; ii++)
		{
		int* p = new int[100000]; // 一次申请 100000 个整数，这个语法以后再讲。
		cout << "ii="<<ii<<",p=" << p << endl;
		}
	*/

	return 0;
}
#endif // 1

// 二级指针
#if 0
// 声明二级指针的语法：数据类型** 指针名;
/*
	在函数中，如果传递普通变量的地址，形参用指针；传递指针的地址，形参用二级指针。
	把普通变量的地址传入函数后可以在函数中修改变量的值；把指针的地址传入函数后可以在函数中
	指针的值。
*/

void func(int** pp)
{
	*pp = new int(3);
	cout << "pp=" << pp << ",*pp=" << *pp << endl;
}

int main()
{
	/*
		int ii = 8; cout << "ii=" << ii << ",ii 的地址是：" << &ii << endl;
		int* pii = &ii; cout << "pii=" << pii << ",pii 的地址是：" << &pii << ",*pii=" <<
		*pii << endl;
		int** ppii = &pii; cout << "ppii=" << ppii << ",ppii 的地址是：" << &ppii << ",*ppii="
		<< *ppii << endl;
		cout << "**ppii=" << **ppii << endl;
*/
	int* p = 0;
	func(&p);
	/*
		{
		int** pp = &p;
		*pp = new int(3);
		cout << "pp=" << pp << ",*pp=" << *pp << endl;
		}
	*/
	cout << "p=" << p << ",*p=" << *p << endl;

	return 0;
}
#endif // 1

// 空指针
#if 0
int main()
{
	void func(int* no, string * str) // 向超女表白的函数。;
	{
		if ((no == 0) || (str == 0)) return;
		cout << "亲爱的" << *no << "号：" << *str << endl;
	}
	int main()
	{
		// int bh = 3; // 超女的编号。
		// string message = "我是一只傻傻鸟。"; // 向超女表白的内容。
		int* bh = 0; // new int(3);
		string* message = 0; // new string("我是一只傻傻鸟。");
		func(bh, message); // 调用向超女表白的函数。
		delete bh; delete message;
	}

	return 0;
}
#endif // 1

// 野指针
#if 0

/*
		野指针就是指针指向的不是一个有效（合法）的地址。
		在程序中，如果访问野指针，可能会造成程序的崩溃。
		出现野指针的情况主要有三种：
		1）指针在定义的时候，如果没有进行初始化，它的值是不确定的（乱指一气）。
		2）如果用指针指向了动态分配的内存，内存被释放后，指针不会置空，但是，指向的地址已失效。
		3）指针指向的变量已超越变量的作用域（变量的内存空间已被系统回收），让指针指向了函数的局
		部变量，或者把函数的局部变量的地址作为返回值赋给了指针。
		规避方法：
		1）指针在定义的时候，如果没地方指，就初始化为 nullptr。
		2）动态分配的内存被释放后，将其置为 nullptr。
		3）函数不要返回局部变量的地址。
		注意：野指针的危害比空指针要大很多，在程序中，如果访问野指针，可能会造成程序的崩溃。是
		可能，不是一定，程序的表现是不稳定，增加了调试程序的难度。
*/


int* func()
{
	int a = 3;
	cout << "a=" << a << ",&a=" << &a << endl;
	return &a;

}

int main()
{
	int* p = func();
	cout << "p=" << p << ",*p=" << *p << endl;

	return 0;
}
#endif // 1

// 函数指针
#if 0

/*
	1）声明函数指针：
		声明普通指针时，必须提供指针的类型。同样，
		声明函数指针时，也必须提供函数类型，函数的类型是指返回值和参数列表(函数名和形参名不是)

		假设函数的原型是：
		nt func1(int bh,string str)
		int func2(int no,string message);
		int func3(int id,string info);
		bool func4(int id,string info);
		bool func5(int id);

		则函数指针的声明是：
		nt (*pfa)(int,string):
		bool (*pfb)(int,string);
		bool (*pfc(int);
		pfa、pfb、pfc 是函数指针名，必须用括号，否则就成了返回指针的函数。

	2）函数指针的赋值：
		函数名就是函数的地址。
		函数指针的赋值：函数指针名=函数名；

	3）函数指针的调用：
		(*函数指针名(实参);
		函数指针名(实参);
*/

void func(int no, string str)
{
	cout << "亲爱的" << no << "号：" << str << endl;
}

void shouhou(int a, string b)
{
	cout << "好的，" << a << "号店铺" << b << endl;
}

int main()
{
	//int bh = 3;											   // 编号
	//string message = "我是一只傻傻鸟。"; // 内容
	//func(bh, message);							 // 调用函数func 
	//void(*pfunc)(int, string);						 // 声明函数的函数指针。
	//pfunc = func;									// 对函数指针赋值，语法是函数指针名 = 函数名。
	//pfunc(bh, message);						   // 用函数指针名调用函数。 C++

	// 举个例子：
	int shitang = 3; // 总共5号店铺
	string  jingli = "味道不行，我就开了";
	void(*shiyang)(int, string);
	shiyang = shouhou;
	shiyang(shitang, jingli);

	return 0;
}
#endif // 1

// 函数指针和回调函数
#if 1

void zs(int a)
{
	cout << "经理，" << a << "号店铺饭菜里有虫子" << endl;
}

void ls(int a)
{
	cout << "经理，" << a << "号店铺价格太贵，量太少" << endl;
}

void show( void(*pf)(int) ,int b)
{
	cout << "经理正在前往处理现场" << endl;
	pf(b);
	cout << "经理已经完成了\n" << endl;
}

int main()
{
	show(zs, 5);
	show(ls, 2);

	return 0;
}
#endif // 1
