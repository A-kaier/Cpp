#include<iostream>
using namespace std;

class agirl
{
public:
	string a_name; // 姓名属性
	int a_age; // 颜值：1-沉鱼落雁；2-漂亮；3-一般；4-歪瓜裂枣。

	// 两个参数的普通构造函数。
	agirl(const string& name, int age)
	{
		a_name = name;
		a_age = age;
	}

	// 超女自我介绍的方法。
	void show() const
	{
		cout << "我是：" << a_name << "，最漂亮的超女。" << endl;
	}

	// 超女颜值pk的方法。
	const agirl& pk(const agirl& g) const
	{
		if (g.a_age < a_age) return g; // 比较颜值，返回更高颜值的超女。

		/*在每个非静态成员函数中，this 指针指向调用该成员函数的对象
		在 pk 方法中，* this 返回当前对象的引用，允许在 const 方法中返回调用该方法的对象*/
		return *this; // 返回当前对象。

	}
};

int main()
{
	// 比较五个超女的颜值，然后由更漂亮的超女作自我介绍。
	agirl g1("西施", 5), g2("西瓜", 3), g3("冰冰", 4), g4("幂幂", 5), g5("金莲", 2);
	const agirl& g = g1.pk(g2).pk(g3).pk(g4).pk(g5); // 连续比较颜值，找到颜值最高的超女。
	g.show(); // 调用显示函数，自我介绍。

	return 0;
}