#include <iostream>
#include <string>
#define MAX 100
using namespace std;

void caidan()
{
	cout << "***************************" << endl;
	cout << "*****   1.添加联系人   *****" << endl;
	cout << "*****   2.显示联系人   *****" << endl;
	cout << "*****   3.删除联系人   *****" << endl;
	cout << "*****   4.查找联系人   *****" << endl;
	cout << "*****   5.修改联系人   *****" << endl;
	cout << "*****   6.清空联系人   *****" << endl;
	cout << "*****   0.退出通讯录   *****" << endl;
	cout << "***************************" << endl;
}

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
		cout << "男 -> 1   女 -> 0" << endl;
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

// 2.显示联系人
void xslianxiren(tongxunlu* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "无联系人" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->lianxirenArray[i].l_name << "\t";
			cout << "性别：" << (abs->lianxirenArray[i].sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->lianxirenArray[i].age << "\t";
			cout << "电话：" << abs->lianxirenArray[i].phone << " \t";
			cout << "地址：" << abs->lianxirenArray[i].zhuzhi << endl;
		}
	}
	system("pause");
	system("cls");
}

// 3.删除联系人

int isExist(tongxunlu* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		// 找到用户输入的姓名了
		if (abs->lianxirenArray[i].l_name == name)
		{
			return i;// 找到了，返回这个人在数组中的下标编号
		}
	}
	return -1; // 如果遍历结束都没有找到，返回 - 1
}

void sclianxiren(tongxunlu* abs)
{
	cout << "请输入要删除的联系人：" << endl;
	string name;
	cin >> name;

	// ret == -1   未查到
	// ret != -1  查到了
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//查找到人，要进行删除操作
		for (int i = 0; i < abs->m_Size; i++)
		{
			// 数据迁移
			abs->lianxirenArray[i] = abs->lianxirenArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

// 4.查找联系人
void czlianxiren(tongxunlu* abs)
{
	cout << "请输入要查找的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->lianxirenArray[ret].l_name << "\t";
		cout << "性别：" << abs->lianxirenArray[ret].sex << "\t";
		cout << "年龄：" << abs->lianxirenArray[ret].age << "\t";
		cout << "电话：" << abs->lianxirenArray[ret].phone << "\t";
		cout << "住址：" << abs->lianxirenArray[ret].zhuzhi << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

// 5.修改联系人
void xglianxiren(tongxunlu* abs)
{

	cout << "请输入要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		// 姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->lianxirenArray[ret].l_name = name;

		// 性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 ---- 男" << endl;
		cout << "2 ---- 女" << endl;
		while (true)
		{
			cin >> sex;
			// 判断
			if (sex == 1 || sex == 2)
			{
				abs->lianxirenArray[ret].sex = sex;
				break;
			}
			cout << "输入有误，重新输入" << endl;
		}

		// 年龄
		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->lianxirenArray[ret].age = age;

		// 电话号码
		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		abs->lianxirenArray[ret].phone = phone;

		//家庭住址
		string zhuzhi;
		cout << "请输入家庭住址：" << endl;
		cin >> zhuzhi;
		abs->lianxirenArray[ret].zhuzhi = zhuzhi;

		cout << endl;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

// 清空联系人
void cleanlianxiren(tongxunlu* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int selete = 0; // 初始化用户输入的数字

	// 创建通讯录
	tongxunlu abs;
	// 初始化通信录中人数
	abs.m_Size = 0;
	while (true) {
		caidan();
		cin >> selete;
		switch (selete) {
		case 1: // 1.添加联系人
			addlianxiren(&abs); // 利用地址传递，可以修饰形参
			break;
		case 2:// 2.显示联系人
			xslianxiren(&abs);
			break;
		case 3: // 3.删除联系人
			sclianxiren(&abs);
			break;
		case 4: // 4.查找联系人
			czlianxiren(&abs);
			break;
		case 5: // 5.修改联系人
			xglianxiren(&abs);
			break;
		case 6: // 6.清空联系人
			cleanlianxiren(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}
