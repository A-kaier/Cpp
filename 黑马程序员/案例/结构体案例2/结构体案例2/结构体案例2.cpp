#include<iostream>
using namespace std;

/* 设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。
		通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。*/

		// 1.设计一个英雄的结构体，包括成员姓名，年龄，性别
struct hero
{
	string name;
	int age;
	string sex;
};

void paiarray(struct hero heroarray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				struct hero temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}
};

void printarray(struct hero heroarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroarray[i].name << "，年龄：" << heroarray[i].age << "，性别：" << heroarray[i].sex << endl;
	}
};


int main()
{
	// 2.创建结构体数组，数组中存放5名英雄
	struct hero heroarray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	// 3.通过冒泡排序，将数组中的英雄按照年龄进行升序排序
	int len = sizeof(heroarray) / sizeof(heroarray[0]);
	paiarray(heroarray, len);
	// 4.打印排序后的结果
	printarray(heroarray, len);


	return 0;
}