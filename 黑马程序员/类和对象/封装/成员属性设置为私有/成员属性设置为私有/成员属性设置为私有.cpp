#include <iostream>
#include<string.h>
using namespace std;


/*优点1： 将所有成员属性设置为私有，可以自己控制读写权限
优点2：对于写权限，我们可以检测数据的有效性*/

class Person
{
public:
	// 姓名设置可读可写
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		return m_name;
	}

	//获取年龄
	int getage()
	{
		return m_age;
	}
	//设置年龄

	void setage(int age)
	{
		if (age < 0 || age > 100)
		{
			cout << "你个老妖精" << endl;
			return;
		}
		m_age = age;
	}

	//情人设置为只写
	void setm_Lover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_name; // 可读可写  姓名

	int m_age; // 只读  年龄

	string m_Lover; // 只写  情人
};

int main()
{
	Person p;
	//姓名设置
	p.setname("张三");
	cout << "姓名：" << p.getname() << endl;

	//年龄设置
	p.setage(18);
	cout << "年龄：" << p.getage() << endl;

	//情人设置
	p.setm_Lover("刘亦菲");
	//cout << "情人：" << p.m_Lover() << endl; // 只写属性，不可以读取

	system("pause");
	return 0;
}
