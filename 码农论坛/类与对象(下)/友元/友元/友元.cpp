#include<iostream>
using namespace std;

/*在友元成员函数中，可以访问另一个类的所有成员。
如果要把男朋友类CBoy的某成员函数声明为超女类CGirl的友元，声明和定义的顺序如下：

class CGirl;            // 前置声明。
class CBoy { ...... };      // CBoy的定义。
class CGirl { ...... };      // CGirl的定义。

// 友元成员函数的定义。
void CBoy::func(CGirl& g) { ...... }*/

/*注意事项
友元关系是单向的：如果类 A 是类 B 的友元，类 B 不会自动成为类 A 的友元。
友元关系不能被继承：子类不能继承父类的友元关系。
友元函数不属于类的成员：友元函数可以被定义在任何地方，不是类的成员，但能访问该类的私有和保护成员。*/

class CGirl;      // 把超女类的声明前置

class CBoy    // 超女的男朋友类
{
public:
	void func1(const CGirl& g);
	void func2(const CGirl& g);
};

class CGirl       // 超女类CGirl。
{
	friend void CBoy::func1(const CGirl& g);
	// friend void CBoy::func2(const CGirl& g);
public:
	string    m_name;   // 姓名。
	// 默认构造函数。
	CGirl() { m_name = "西施";  m_xw = 87; }
	// 显示姓名的成员函数。
	void showname() { cout << "姓名：" << m_name << endl; }
private:
	int         m_xw;        // 体重。
	// 显示体重的成员函数。
	void showxw() const { cout << "体重：" << m_xw << endl; }
};

void CBoy::func1(const CGirl& g) { cout << "func1()我女朋友的体重是：" << g.m_xw << endl; }
void CBoy::func2(const CGirl& g) { cout << "func2()我女朋友的姓名是：" << g.m_name << endl; }

int main()
{
	CGirl g;
	CBoy b;
	b.func2(g);
	b.func1(g);
}


