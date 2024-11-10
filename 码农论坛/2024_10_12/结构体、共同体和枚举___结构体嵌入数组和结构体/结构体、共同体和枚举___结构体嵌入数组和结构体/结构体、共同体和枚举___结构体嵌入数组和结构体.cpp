#include <iostream>
using namespace std;
// 结构体：struct

// 结构体st_girl
#if 0
struct st_girl
{
	char name[21];        // 姓名。
	int    score[2][3] = { 11,12,13,21,22,23 };          // 存放评委的打分。
	int age;                     // 年龄。
	double weight;        // 体重（kg）。
	char sex;                   // 性别：X-女；Y-男。
	bool yz;                    // 颜值：true-漂亮；false-不漂亮。
};

void func(st_girl* pst)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "pst->name[" << i << "][" << j << "] = " << pst->score[i][j] << endl;
		}
	}
}

int main()
{
	st_girl aaa; // 调用st_girl的值并且取名为 aaa
	func(&aaa); // 用函数func 调用st_girl的 aaa
	//	for (int ii = 0; ii < 3; ii++) girl.score[ii] = 100 + ii;
	//	for (int ii = 0; ii < 3; ii++) cout <<"girl.score["<<ii<<"] =" << girl.score[ii]<<endl;

	return 0;
}
#endif // 0

// 宠物结构体
#if 1

struct zong
{
	char name[100]; // 宠物的名字
	char type[100]; // 宠物的物种
};

struct pepole
{
	char name[100]; // 名字
	int age; // 年龄
	double weight; // 体重（kg）。
	char sex; // 性别：X-女；Y-男。
	bool yz; // 颜值：true-漂亮；false-不漂亮。
	struct zong z; // 宠物
};

int main()
{
	pepole ren =
	{
		"西施",
		18,
		50.5,
		'X',
		1,
		// 先输入名字
		"大胖",
		// 再输入宠物的类型
		"宠物猪"
	};
	cout
		<< "姓名：" << ren.name
		<< "，年龄：" << ren.age
		<< "，体重：" << ren.weight
		<< "，性别：" << (ren.sex ? "女" : "男")
		<< "，颜值：" << (ren.yz ? "漂亮" : "不漂亮") // 三元运算符
		<< "，宠物：" << ren.z.type
		<< endl;
	cout << endl;

	ren = { "嫦娥",18,50,'X',1,{"贝贝","天鹅"} };
	cout
		<< ren.name
		<< "的宠物是一只 " << ren.z.type
		<< "，名字叫：" << ren.z.name
		<< endl;

	ren.z = { "小白","狗" };    // C++11标准的语法。
	cout << ren.name << "的宠物是一只 " << ren.z.type << "，名字叫" << ren.z.name << endl;

	ren.age = {100};
	cout << "嫦娥的实力是 " << ren.age;

	return 0;
}
#endif // 0

