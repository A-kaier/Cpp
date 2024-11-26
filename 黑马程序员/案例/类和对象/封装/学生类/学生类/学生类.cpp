#include <iostream>
using namespace std;

// 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

// 1.输入输出
#if 0
class student {
public:
	string stuname;
	int stuxuehao;

	// 构造函数，直接输入姓名和学号
	student() {
		cout << "请输入学生的姓名：" << endl;
		cin >> stuname;
		cout << "请输入学生的学号：" << endl;
		cin >> stuxuehao;
	}

	// 显示学生信息
	void show() {
		cout << "学生的姓名是：" << stuname << "，学生的学号是：" << stuxuehao << endl;
	}
};

int main() {
	student a;  // 创建学生对象，会自动输入姓名和学号
	a.show();  // 显示学生信息
	return 0;
}
#endif // 0

// 2.调用，输出
#if 1
class student
{
public:
	string s_name;
	string s_age;
public:
	void vname(string name)
	{
		s_name = name;
	}
	void vage(string age)
	{
		s_age = age;
	}
	void shuchu()
	{
		cout << "学生的姓名是：" << s_name << "\n学生的学号是：" << s_age << endl;
	}
};
int main()
{
	student s1;
	s1.vname("张三");
	s1.vage("001");
	s1.shuchu();

	cout << endl;

	student s2;
	s2.vname("李四");
	s2.vage("002");
	s2.shuchu();

	cout << endl;
	system("pause");
	return 0;
}
#endif // 0
