#include <iostream>
#include <string>
#include "tianjia.h"
#define MAX 100
using namespace std;

 //联系人结构体
struct lianxiren
{
	int sex; // 性别：男1女0
	int age; // 年龄
	string l_name; // 名字
	string phone; // 电话
	string zhuzhi; // 家庭住址
};

// 通讯录结构体
struct tongxunlu
{
	struct lianxiren lianxirenArray[MAX];
	int m_Size; // 通讯录中人员个数
};

// 封装添加联系人函数
void addlianxiren(tongxunlu* abs)
{
	// 判断电话本是否满了
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		// 姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->lianxirenArray[abs->m_Size].l_name = name;

		// 性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		while (true)
		{
			cin >> sex;
			// 判断
			if (sex == 1 || sex == 2)
			{
				abs->lianxirenArray[abs->m_Size].sex = sex;
				break;
			}
			cout << "输入有误，重新输入" << endl;
		}

		// 年龄
		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->lianxirenArray[abs->m_Size].age = age;

		// 电话号码
		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		abs->lianxirenArray[abs->m_Size].phone = phone;

		//家庭住址
		string zhuzhi;
		cout << "请输入家庭住址：" << endl;
		cin >> zhuzhi;
		abs->lianxirenArray[abs->m_Size].zhuzhi = zhuzhi;

		// 更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");

	}
}
