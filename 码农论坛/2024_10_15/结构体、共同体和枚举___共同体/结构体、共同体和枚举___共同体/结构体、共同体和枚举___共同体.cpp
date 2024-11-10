#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*union 共同体名
{
	成员一的数据类型  成员名一;
	成员二的数据类型  成员名二;
	成员三的数据类型  成员名三;
	......
		成员n的数据类型  成员名n;
};*/

#if 0
union  udata       // 声明共同体udata。
{
	int		a;
	double b;
	char		 c[25];
};

int main()
{
	udata data;     // 定义共同体变量。
	cout << "sizeof(data)=" << sizeof(data) << endl;

	cout << "data.a的地址是：" << (void*)&data.a << endl;
	cout << "data.b的地址是：" << (void*)&data.b << endl;
	cout << "data.c的地址是：" << (void*)&data.c << endl;
	cout << endl;

	data.a = 3;
	data.b = 8.8;
	strcpy(data.c, "我是一只傻傻鸟。");
	cout << "data.a的地址是：" << data.a << endl;
	cout << "data.b的地址是：" << data.b << endl;
	cout << "data.c的地址是：" << data.c << endl;

	return 0;
}
#endif // 0

#if 1
struct st_girl       // 声明超女结构体。
{
	int no;             // 超女编号。

	union              // 声明匿名共同体。
	{
		int        a;
		double b;
		char     c[21];
	};
};

int main()
{
	struct st_girl girl;

	cout << "girl.a的地址是：" << (void*)&girl.a << endl;
	cout << "girl.b的地址是：" << (void*)&girl.b << endl;
	cout << "girl.c的地址是：" << (void*)&girl.c << endl;
	cout << endl;

	girl.a = 3;
	girl.b = 8.8;
	strcpy(girl.c, "我是一只傻傻鸟。");
	cout << "girl.a=" << girl.a << endl;
	cout << "girl.b=" << girl.b << endl;
	cout << "girl.c=" << girl.c << endl;
	cout << endl;

	girl.a = 3;
	cout << "girl.a=" << girl.a << endl;
	girl.b = 8.8;
	cout << "girl.b=" << girl.b << endl;
	strcpy(girl.c, "我是一只傻傻鸟。");
	cout << "girl.c=" << girl.c << endl;
}

#endif // 0
