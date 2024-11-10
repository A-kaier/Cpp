#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

// 形参

// 1.值传递
void printarrstu1(struct student s)
{
	s.age = 50; // 值传递不改变实参的值
	cout << "子  函数中打印 姓名：" << s.name << "，年龄：" << s.age << "，分数" << s.score << endl;
};

// 2.地址传递
void printarrstu2(struct student* p)
{
	p->age = 100; // 地址传递改变实参的值
	cout << "子 2函数中打印 姓名：" << p->name << "，年龄：" << p->age << "，分数" << p->score << endl;
};


int main()
{
	// 实参
	struct student s;
	s.name = "袁华";
	s.age = 18;
	s.score = 100;

	printarrstu1(s);
	printarrstu2(&s);
	s.age = 18; // 将printarrstu2地址传递改变实参的值改回18
	cout << "main函数中打印 姓名：" << s.name << "，年龄：" << s.age << "，分数" << s.score << endl;

	return 0;
}