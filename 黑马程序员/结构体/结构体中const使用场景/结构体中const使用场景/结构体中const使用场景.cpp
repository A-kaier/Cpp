#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

void coutarrstu(const struct student* s) // 加指针是为了减少内存，一个指针只有四个字节
{
	s->age = 90; // 加了const就不能更改值
	cout << "姓名：" << s->name << "，年龄：" << s->age << "，分数：" << s->score << endl;
};

int main()
{
	student s = { "张三",18,100 };
	coutarrstu(&s);

	return 0;
}