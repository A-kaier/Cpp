#include <iostream>
using namespace std;

// if语句的基本结构
#if 0 
int main()
{
	//判断超女的颜值，如果漂亮，在控制台输出“晋级下一轮”，否则输出“冲关失败”
   // 1）声明一个 bool 型变量，用于存放超女的颜值数据。
	bool yz;
	// 2）显示输入超女颜值的提示信息
	cout << "请输入超女的颜值值（1-漂亮；0-不漂亮）：";
	// 3）输入超女的颜值数据，存放在变量中
	cin >> yz;
	cout << endl; // endl 意思是  换行
	// 4）用if语句判断超女的颜值，如果漂亮，显示“晋级下一轮”，否则显示“冲关失败
	if (yz == 1)
	{
		cout << "小姐姐很漂亮呦！！！" << endl;
		cout << "恭喜您，晋级下一轮！！！" << endl;

	}
	else
	{
		cout << "对不起，冲关失败！" << endl;
		cout << "推荐一个美容院，…." << endl;
	}
}
#endif // 1

// 嵌套使用if语句：试例
#if 0
int main()
{
	//超女选秀：1）性别（X-女，Y-男）；2）颜值（1-漂亮，0-不漂亮）；3）身材（1-火辣丰满，3 - 苗条
	//声明三个变量，存放超女的性别、颜值和身材数据。
	char sex;// 性别
	bool yz;
	int sc;
	// 显示“请输入超女的性别（X-女，Y-男）：”的提示文字
	cout << "请输入超女的性别（X-女，Y-男）：";
	// 输入超女的性别，存放在变量中。
	cin >> sex;
	cout << endl;
	//判断超女的性别，如果是女，流程继续，否则程序结束
	if (sex == 'X')
	{
		//显示“请输入超女的颜值（1-漂亮，0-不漂亮）：”的提示文字
		cout << "请输入超女的颜值（1-漂亮，0-不漂亮）：";
		//输入超女的颜值，存放在变量中。
		cin >> yz;
		cout << endl;
		//判断超女的颜值，如果是漂亮，流程继续，否则程序结束。
		if (yz == 1)
		{
			// 显示“请输入超女的身材（1 - 火辣，2 - 丰满，3 - 苗条）：”的提示文字
			cout << "请输入超女的身材（1 - 火辣，2 - 丰满，3 - 苗条）：";
			//输入超女的身材，存放在变量中
			cin >> sc;
			cout << endl;
			// 判断超女的身材，如果是火辣，显示“晋级成功”，如果是丰满，显示“待定
			if (sc == 1)
			{
				cout << "晋级成功";
				cout << endl;
			}
			else
			{
				if (sc == 2)
				{
					cout << "待定";
					cout << endl;
				}
			}
		}
		else
		{
			cout << "你虽然是女生，但是你没有达到我们的颜值要求，请自行离开";
		}
	}
	else
	{
		cout << endl;
		cout << "你是男生，去隔壁超男";
	}
}
#endif // 1

// 多条件的if语句：试例
#if 0
int main()
{
	//超女的身材：1-火辣；2-丰满；3-苗条；4-强壮；5-肥胖；>5-未知。
	//声明存放超女身材数据的变量
	int sc;
	//显示“请输入身材的代码（1-火辣；2-丰满；3-苗条；4-强壮；5-肥胖；>5-未知）：”的提示文字
	cout << "请输入身材的代码（1-火辣；2-丰满；3-苗条；4-强壮；5-肥胖；>5-未知）：";
	// 输入超女身材的代码，存放在变量中。
	cin >> sc;
	//用多条件的 if语句，判断身材代码，显示身材的中文描述
	//if (sc == 1) cout << "火辣" << endl;
	//else if (sc == 2) cout << "丰满" << endl;
	//else if (sc == 3) cout << "苗条" << endl;
	//else if (sc == 4) cout << "强壮" << endl;
	//else if (sc == 5) cout << "肥胖" << endl;
	//else cout << "未知" << endl;

	if (sc == 1)
	{
		cout << "火辣" << endl;
	}
	else if (sc == 2)
	{
		cout << "丰满" << endl;
	}
	else if (sc == 3)
	{
		cout << "苗条" << endl;
	}
	else if (sc == 4)
	{
		cout << "强壮" << endl;
	}
	else if (sc == 5)
	{
		cout << "肥胖" << endl;
	}
	else
	{
		cout << "未知" << endl;
	}
}
#endif // 1

// 三目运算、判断闰年
#if 0
int main()
{
	//int a, b, c;
	//a = 1, b = 2;
	//c = (a > b) ? a:b; // 三目运算
	//cout << "c = "<< c << endl;

	int year;
	//year = (year % 100 == 0) ? (year % 400 == 0 ? 1 : 0) : (year % 4 == 0 ? 1 : 0);
	cout << "请输入年份：";
	cin >> year;
	if (year > 10000)
	{
		if (year % 3200 == 0 && year % 172800 == 0)
		{
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			{
				cout << year << "是闰年" << endl;
			}else
			{
				cout << year << "不是闰年" << endl;
			}
		}else
		{
			cout << year << "不是闰年" << endl;
		}
	}else
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			cout << year << "是闰年" << endl;
		}
		else
		{
			cout << year << "不是闰年" << endl;
		}
	}
}
#endif // 1


// switch语句
#if 0
int main()
{
	int yz;
	cin >> yz;
	switch (yz)
	{
	case 1:
		cout << "是的,等于 1 ";
		break;
	case 2:
		cout << "是的,等于 2 ";
		break;
	case 3:
		cout << "是的,等于 3 ";
		break;
	default:
		cout << "什么都不是";
		break;
	}
}
#endif // 1