#include<iostream>
using namespace std;

 /*
 声明 / 创建引用的语法：数据类型 & 引用名 = 原变量名;
 语法：数据类型 * const 变量名;
引用和指针本质上没有区别。
*/

int main()
{
	int a = 10;    // 声明普通的整型变量。           
	int& ra = a; // 创建引用ra，ra是a的别名。
	/*换成int* const   把a替换成& a*/
	int* const rb = &a; /*声明指针常量rb，让它指向变量a*/
	cout << " a的地址是：" << &a << "，  a的值是：" << a << endl;
	cout << "ra的地址是：" << &ra << "， ra的值是：" << ra << endl;     // 把&ra替换成ra，把ra替换成*ra
	cout << "rb的值是  ：" << rb << "，*rb的值是：" << *rb << endl;
	cout << endl;

	ra = 5;
	cout << " a的地址是：" << &a << "，  a的值是：" << a << endl;
	cout << "ra的地址是：" << &ra << "， ra的值是：" << ra << endl;    
	cout << "rb的值是  ：" << rb << "，*rb的值是：" << *rb << endl;



	return 0;
}