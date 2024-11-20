#include<iostream>
using namespace std;

// 作用： 给变量起别名
// 语法：数据类型& 别名 = 原名

 /*
	 引用必须初始化
	 引用在初始化后，不可以改变
*/

int main()
{
	int a = 10;
	cout << "a = " << a << endl;

	cout << endl;

	int& b = a;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << endl;

	int c = 30;
	b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << endl;

	/*注意事项*/
	int a2 = 10;
	int b2 = 20;
	//int& c2; // 报错

	int& c2 = a2;
	c2 = b2;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;
	cout << "c2 = " << c2 << endl;

	system("pause");
	return 0;
}