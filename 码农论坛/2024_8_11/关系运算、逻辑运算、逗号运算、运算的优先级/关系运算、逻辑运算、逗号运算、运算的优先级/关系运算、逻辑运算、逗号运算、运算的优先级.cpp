#include <iostream>

using namespace std;

#if 0 // 关系运算
int main()
{
	int a;
	int b;

	cin >> a;
	cin >> b;

	cout << "\n如果为真则输出：1，否则输出0\n" << endl;
	cout << "输出的值是：" << (a >= b) << endl;
	return 0;
}
#endif // 1

#if 0 // 逻辑运算
int main()
{
	//bool a = 1;
	//bool b = 0;
	////bool ab = a && b;
	////bool ab = a || b;
	//bool ab = !a;
	//cout <<"ab = " << ab << endl;

	//超女必须满足四个条件：年龄 25岁以下，身高165 以上、体重 50 公重以下，颜值要漂亮
	//int age = 22;
	//int height = 190;
	//double weight = 46.7;
	//bool yz = true;

	int age;
	int height;
	double weight;
	bool yz;

	// 输入
	cout << "请输入年龄：" << endl;
	cin >> age;

	cout << "请输入身高：" << endl;
	cin >> height;

	cout << "请输入体重：" << endl;
	cin >> weight;

	cout << "请输入颜值(漂亮为 1，不漂亮为 0)：" << endl;
	cin >> yz;

	cout << (age < 25 && height > 165 && weight < 50 && yz == true) << endl;

}
#endif // 1

#if 0 // 逗号运算
int main()
{
	//int a = 10, b = 20, c;
	//c = a + b;
	//int a = 10, b = 20;
	//cout
	//	<< " a = "
	//	<< a
	//	<<","
	//	<< "b = "
	//	<< b
	//	<< "\n a + b = "
	//	<< a + b
	//	<< endl;
	int a, b;
	cout << "请输入 a 的值：" << endl;
	cin >> a;
	cout << "请输入 b 的值：" << endl;
	cin >> b;

	cout << "他们的值是：" << (a + b, a + 20, b + 90, b - (2 * a)) << endl;
}

#endif // 1

#if 0 // 运算的优先级
// 算数运算的组合方式是从左到右
// 赋值运算的组合方式是从右到左
int main()
{
	//int a, b, c;
	//a = 9, b = 66, c = 7;
	//int d;
	////d = a / b % c;
	//d = (a / b) % c;
	//cout << "他们的值是：" << d << endl;

	//int a, b, c;
	//c = 10;
	//cout << "(c = 10) = " << (c = 10) << endl;


}
#endif // 1


















