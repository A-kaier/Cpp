#define _crt_secure_no_warnings
#include<iostream>
using namespace std;

class CBoy
{
public:
	string m_xm;
	CBoy()
	{
		m_xm.clear();
		cout << "调用了CBoy()构造函数。\n";
	}

	// 带参数的构造函数
	CBoy(string xm)
	{
		m_xm = xm;
		cout << "调用了CBoy(string xm)构造函数。\n";
	}

	// 拷贝构造函数
	CBoy(const CBoy& bb)
	{
		m_xm = bb.m_xm;
		cout << "调用了CBoy(const CBoy &bb) 拷贝构造函数。\n";
	}
};

class CGirl// 超女类
{
public:
	string m_name; // 姓名属性
	const int m_age; // 年龄属性（常量）
	CBoy& m_boy; // 男朋友的信息（引用）

	// 三个参数的构造函数，使用初始化列表
	CGirl(string name, int age, CBoy& boy)
		: m_name(name), m_age(age), m_boy(boy)
	{
		cout << "调用了CGirl(name,age,boy)构造函数。\n";
	}

	// 超女自我介绍的方法
	void show()
	{
		cout
			<< "姓名：" << m_name
			<< "，年龄：" << m_age
			<< "，男朋友：" << m_boy.m_xm
			<< endl;
	}
};

int main()
{
	CBoy boy("子都");  // 创建 CBoy 对象
	CGirl g1("冰冰", 18, boy);  // 创建 CGirl 对象并初始化
	g1.show();  // 调用 show 方法，输出超女的信息ssss

	return 0;
}