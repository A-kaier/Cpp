#include <iostream>
using namespace std;

// while语句
#if 0
int main()
{
	//有十个超女，编号是1-10，在控制台输出这10个超女的编号
	int a = 0;
	while (a < 10)
	{
		cout << "这是第" << ++a << "名超女的编号" << endl;
	}

	return 0;
}
#endif // 1

// 循环的跳转
#if 0
int main()
{
	// break 跳出（中止）当前循环语句，continue 回到当前循环语句的首部。
	// 程序运行后一直工作，逐个输入超女的数据，判断是否晋级，如果到了休息时间，就把程序停下来。

	// 超女选秀的流程：1）如果漂亮，直接晋级；2）不漂亮也行，身材火辣的也可以晋级
	bool num = true;
	while (true)
	{
		if (num == false)
		{
			// a）显示“是否继续下一名超女选秀（1-继续，0-结束）：＂的提示文字。
			cout << "是否继续下一名超女选秀（1-继续，0-结束）：";
			// b）输入是否继续的决定，存放在变量中。
			bool exist;
			cin >> exist;
			// c）判断输入的决定，如果是结束，流程跳出循环。
			if (exist == false) break;
		}
		num = false;
		// 1）显示“请输入超女的颜值（1-漂亮，0-不漂亮）：”的提示文字。
		cout << "请输入超女的颜值（1-漂亮，0-不漂亮）：";
		// 2）输入超女的颜值，存放在变量中。
		bool yz;
		cin >> yz;
		//3）判断超女的颜值，如果漂亮，显示“晋级成功”，流程跳转到循环的首部
		if (yz == true)
		{
			cout << "晋级成功\n";
			continue;
		}

		// 4）显示“请输入超女的身材（1-火辣，0-不辣）：”的提示文字
		cout << "请输入超女的身材（1-火辣，0-不辣）：";
		//5）输入超女的身材，存放在变量中。
		bool sc;
		cin >> sc;
		// 6）判断超女的身材，如果火辣，显示“晋级成功”
		if (sc == true) cout << "晋级成功" << endl;
	}

	return 0;
}
#endif // 1

// for循环
#if 0
int main()
{
	////有十个超女，编号是1-10，在控制台输出这十个超女的编号。
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i == 7)
	//	{
	//		cout << "这是第" << i + 2 << "名超女的编号" << endl;
	//		continue;
	//	}
	//	if (i == 9)
	//	{
	//		cout << "这是第" << i + 10 << "名超女的编号" << endl;
	//		break;
	//	}
	//}



	return 0;
}
#endif // 1

// 循环的嵌套
#if 0
int main()
{
	//超女分4个小组，每个小组有3 名超女，在控制台显示每个超女的小组编号和组内编号。用一个循环，显示4个小组的信息
	//for (int i = 1; i <= 4; i++)
	//{
	//	// 再用一个循环，显示一组中3名超女的信息
	//	for (int j = 0; j <= 3; j++)
	//	{
	//		cout << "这是第" << i << "个小组的第" << j << "名超女。\n";
	//	}
	//	cout << endl;
	//}

	// 在控制台输出九九乘法表
	for (int i = 1; i <= 9; i++)// 横
	{
		for (int j = 1; j <= i; j++)// 列
		{
			cout << i << " * " << j << " = " << i * j << "  ";
		}
		cout << endl;
	}

	return 0;
}
#endif // 1

// do...while语句
#if 0
int main()
{
	//有十个超女，编号是1-10，在控制台输出这10个超女的编号
	int i = 1;
	do
	{
		//cout << "这是第" << i++ << "名超女的编号\n" << endl;
		cout << "这是第" << i << "名超女的编号\n" << endl;
		i++;
	} while (i <= 10);

	return 0;
}
#endif // 1

// goto语句
#if 0
int main()
{
	cout << "这是第1名超女的编号\n";
	cout << "这是第2名超女的编号\n";
	int i = 0;
aaa:
	cout << "这是第3名超女的编号\n";
	cout << "这是第4名超女的编号\n";
	cout << endl;
	i++;
	if (i <= 4) goto aaa; cout << endl;
	cout << "这是第5名超女的编号\n";
	cout << "这是第6名超女的编号\n";


	return 0;
}
#endif // 1
