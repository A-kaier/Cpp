#include<iostream>
using namespace std;

/*C++类中有两种数据成员：nonstatic、static，三种函数成员：nonstatic、static、virtual。*/

class CGirl
{
public:
	char m_name[3];  // 姓名属性。
	int m_bh;  // 编号属性
	static int m_age;   // 年龄属性（静态成员）。

	// 默认构造函数
	CGirl()
	{
		memset(m_name, 0, sizeof(m_name));
		m_age = 0;
	}
	// 默认析构函数
	~CGirl() {};

	// 显示超女的姓名。
	void showname()
	{
		if (this == nullptr)
			return;
		cout << "姓名：" << this->m_name << endl;
	}

	// 显示超女的年龄。
	void showage()
	{
		cout << "年龄：" << m_age << endl;
	}
};

// 静态成员变量定义
int CGirl::m_age;

int aaa;// 全局变量
void func() {}// 普通函数

int main()
{
	CGirl g;  // 普通函数
	cout << "对象g占用的内存大小是：" << sizeof(g) << endl;
	cout << "对象g的地址是：" << (void*)&g << endl;
	cout << "成员变量m_bh的地址是：" << (void*)&g.m_bh << endl;
	cout << "成员变量m_name的地址是：" << (void*)&g.m_name << endl;
	cout << "成员变量m_age的地址是：" << (void*)&g.m_age << endl;
	cout << "全局变量aaa的地址是：" << (void*)&aaa << endl;
	printf("成员函数showname的地址是：%p\n", &CGirl::showname);
	printf("成员函数showage的地址是：%p\n", &CGirl::showage);
	printf("函数func()的地址是：%p\n", func);

	CGirl* g1 = nullptr;
	g1->showname();

	return 0;
}