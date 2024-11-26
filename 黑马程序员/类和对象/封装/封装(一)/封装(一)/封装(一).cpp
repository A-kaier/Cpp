#include <iostream>
using namespace std;

const double PI = 3.14;

// 1、封装的意义
// 将属性和行为作为一个整体，用来表现生活中的事物

// 封装一个圆类，求圆的周长
// class代表设计一个类，后面跟着的是类名

 /* 封装意义一：
​	在设计类的时候，属性和行为写在一起，表现事物
	语法：class 类名{ 访问权限： 属性 / 行为 };  */

class yuan
{
public:  //访问权限  公共的权限

	// 属性
	int m_r = 0; // 半径
	

	// 行为
	// 获取到圆的周长
	double yuanzhouchang()
	{
		cin >> m_r;
		//2 * pi  * r
		//获取圆的周长
		return 2 * 3.14 * m_r;
	}
};

int main()
{
	//通过圆类，创建圆的对象
	// c1就是一个具体的圆
	yuan a;

	cout << "圆的周长为：" << a.yuanzhouchang() << endl;

	system("pause");
	return 0;
}
