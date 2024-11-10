#include <iostream>
using namespace std;

struct myStruct
{
	string name;  // 年龄
	string sex; // 性别
	int age; // 年龄
}s3;

int main()
{
	// struct可以省略不写
	struct myStruct s1;
	s1.name = "杨过", s1.sex = "男", s1.age = 18;
	cout << "姓名：" << s1.name << "，性别：" << s1.sex << "，年龄" << s1.age << endl;

	myStruct s2 = { "小龙女","女",18 };
	cout << "姓名：" << s2.name << "，性别：" << s2.sex << "，年龄" << s2.age << endl;

	s3.age = 100;
	s3.name = "罩得住";
	s3.sex = "男";
	cout << "姓名：" << s3.name << "，性别：" << s3.sex << "，年龄" << s3.age << endl;

	system("pause");
	return 0;
}