#include<iostream>
#include "tianjia.h"
#include "caidan.h"
#include "shanchu.h"
using namespace std;

void shanchu()
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
			break;
		case 3: // 3.删除联系人
			break;
		case 4: // 4.查找联系人
			break;
		case 5: // 5.修改联系人
			break;
		case 6: // 6.清空联系人
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return;
		default:
			break;
		}
	}
}
