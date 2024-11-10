#include<iostream>
using namespace std;

struct myStruct
{
	string name;
	int age;
	int score;
};

int main()
{
	struct myStruct stuarry[3] =
	{
		{"张三",18,99},
		{"李四",18,98},
		{"赵五",18,97}
	};

	stuarry[1].name = "李四";
	stuarry[1].age = 18;
	stuarry[1].score = 60;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuarry[i].name << "，年龄：" << stuarry[i].age << "，成绩" << stuarry[i].score << endl;
	}

	return 0;
}