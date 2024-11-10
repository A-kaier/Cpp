#include<iostream>
using namespace std;

class agirl  // 超女类agirl。
{
	static int m_age;  // 静态成员变量，年龄属性。
public:
	string m_name;   // 非静态成员变量，姓名属性。

	// 两个参数的构造函数。
	agirl(const string& name, int age)
	{
		m_name = name;  // 初始化姓名属性。
		m_age = age;      // 初始化静态年龄属性。
	}


	// 显示超女的姓名。
	void showname()
	{
		cout << "姓名：" << m_name << endl;
	}

	// 静态函数，显示超女的年龄。
	static void showage()
	{
		cout << "年龄：" << m_age << endl;
	}
};




// 静态成员变量的定义和初始化。
int agirl::m_age = 8;// 在全局区域初始化静态成员变量。

int main()
{
	agirl g1("西施1", 21), g2("西施2", 22), g3("西施3", 23); // 创建对象。

	g1.showname(); g1.showage(); // 显示第一个对象的信息。
	g2.showname(); g2.showage(); // 显示第二个对象的信息。
	g3.showname(); g3.showage(); // 显示第三个对象的信息。

	agirl::showage(); // 调用静态成员函数显示年龄。
	// cout << "agirl::m_age=" << agirl::m_age << endl; // 另一种显示静态成员变量的方式。

	return 0;
}