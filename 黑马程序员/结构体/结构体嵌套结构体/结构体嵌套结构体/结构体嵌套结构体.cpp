#include <iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

struct teachar
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main()
{
	struct teachar t;
	t.id = 1;
	t.name = "老王";
	t.age = 88;

	t.stu.age = 18;
	t.stu.name = "小王";
	t.stu.score = 100;

	cout
		<< "老师的编号为：" << t.id << "，老师的姓名是：" << t.name << "，老师的年龄是：" << t.age << endl;
	cout
		<< "学生的姓名是：" << t.stu.name << "，学生的年龄是：" << t.stu.age << "，学生的成绩是：" << t.stu.score << endl;


	return 0;
}
