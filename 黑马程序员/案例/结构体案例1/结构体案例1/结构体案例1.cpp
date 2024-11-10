#include<iostream>
#include<string>
#include<ctime>
using namespace std;

/*学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
1.设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
2.学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
3.最终打印出老师数据以及老师所带的学生数据。*/

struct student
{
	string sname;
	int score;
};

struct teachar
{
	string tname;
	struct student sarray[5];
};

void gongkai(teachar tarray[], int len)
{
	string st = "ABCDE";
	// 给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tarray[i].tname = "Teachar_";
		tarray[i].tname += st[i];

		// 给学生赋值
		for (int j = 0; j < 5; j++)
		{
			tarray[i].sarray[j].sname = "Stutent_";
			tarray[i].sarray[j].sname += st[j];

			int sasc = rand() % 61 + 40;
			tarray[i].sarray[j].score = sasc;
		}
	}
};

void printstutea(struct teachar tarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名是：" << tarray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout
				<< "\t学生的姓名是：" << tarray[i].sarray[j].sname
				<< "，学生的成绩是：" << tarray[i].sarray[j].score << endl;
		}
	}
};

int main()
{
	// 随机数种子
	srand((unsigned int)time(NULL));

	//1、创建3名老师的数组
	struct teachar tarray[3];
	//2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tarray) / sizeof(tarray[0]); // 动态设置老师的数量
	gongkai(tarray, len);
	//3、打印所有老师及所带的学生信息
	printstutea(tarray, len);

	return 0;
}
