#include<iostream>
#include<cstring>
using namespace std;

/*const:
	用于声明常量，表示变量的值不可被修改。
	可用于函数参数、返回值、成员函数、对象等，确保在特定上下文中对象或变量的状态不被改变。
mutable :
	用于修饰类的成员变量，允许在 const 成员函数中修改这些变量。
	主要用于在不改变对象整体逻辑的情况下，允许某些特定的成员变量在 const 成员函数中被修改。*/


class CGirl   // 超女类 CGirl
{
public:
	/*m_name 被声明为 mutable；即使在 show1() 和 show2() 这些 const 成员函数中也能修改它的值。*/
	mutable string m_name; // 姓名属性，可以在 const 方法中修改
	int m_age;// 年龄属性

	// 两个参数的普通构造函数
	CGirl(const string& name, int age) : m_name(name), m_age(age)
	{
		cout << "调用了 CGirl(name, age) 构造函数。\n";
	}

	// 超女自我介绍的方法，显示姓名、年龄
	void show1() const
	{
		m_name = "西施 show1";
		cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
		show3();
	}

	void show2()
	{
		m_name = "西施 show2";
		cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
	}

	void show3() const
	{
		m_name = "西施 show3";
		cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
	}

	void show4()
	{
		m_name = "西施 show4";
		cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
	}
};

int main()
{
	/*g1 被定义为 const 类型。这样一来，g1 只能调用 const 修饰的成员函数*/
	const CGirl g1("冰冰", 18); // 创建 const 对象

	/* 可以正常调用，而如果尝试调用 g1.show3()，则会导致编译错误
		因为 show3() 是非 const 成员函数，无法在 const 对象上调用。*/
	g1.show1(); // 调用 const 成员函数
	// g1.show3(); // 这行代码将导致编译错误，因为 g1 是 const 对象，只能调用 const 成员函数

	return 0;
}