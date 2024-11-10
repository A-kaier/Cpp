#include<iostream>
#include<string>
using namespace std;

/*构造函数：在创建对象时，自动的进行初始化工作。
   析构函数：在销毁对象前，自动的完成清理工作。*/

   // 构造函数
#if 0
class st_girl
{
public:
	string name;
	int         age;
	st_girl(string name1, int age1) { // 带参数的构造函数
		name = name1;
		age = age1;
	}

	st_girl(string name1 = "无名", int age1 = 0) { // 带默认参数的构造函数
		name = name1;
		age = age1;
	}
	st_girl() { /* ... */ } // 没有返回值，不写void：
	st_girl show()
	{
		cout << "姓名：" << name << "，年龄：" << age;
	}
};


int main() {
	st_girl girl1; // 调用默认构造函数
	st_girl girl2("西施", 26); // 调用带参数的构造函数
	girl1.show(); // 输出 "姓名：无名，年龄：0"
	girl2.show(); // 输出 "姓名：西施，年龄：26"
}

#endif // 0

// 析构函数
#if 1

class agirl
{
public:
	string name;
	int age;
	//~agirl() // 析构函数；函数名必须在类名前加 ~ ；
	//{
	//	cout << "对象被销毁，释放资源" << endl;
	//}
	//~agirl() { /* ... */ } // 析构函数没有返回类型，不需要写 void；析构函数不接受任何参数，且不能重载。

	// 构造函数
	agirl(const string& name, int age) : name(name), age(age) {
		cout << "AGirl对象创建: " << name << ", 年龄: " << age << endl;
	}
	// 默认构造函数
	agirl() = default;
	// 析构函数
	~agirl()
	{
		cout << "agirl对象被销毁: " << name << endl;
	}
	// 成员函数
	void display() const
	{
		cout << "名字: " << name << ", 年龄: " << age << endl;
	}
};

/*
	int main() {
	agirl* girl1 = new agirl(); // 动态分配对象
	delete girl1; // 手动调用析构函数，释放资源

	agirl girl2; // 栈上对象
	// girl2 的析构函数在作用域结束时自动调用
   }
*/

int main() {
	// 通过构造函数创建对象
	agirl girl1("西施", 20);  // 显式创建对象
	girl1.display();

	// 使用默认构造函数创建对象
	agirl girl2;  // 创建对象
	girl2.display();  // 不会输出，因为没有初始化

	// 使用统一初始化列表创建对象
	agirl girl3{ "王嫱", 22 };
	girl3.display();

	// 动态分配对象
	agirl* girl4 = new agirl{ "杨贵妃", 25 };
	girl4->display();
	delete girl4;  // 手动销毁对象，调用析构函数

	// 使用赋值语法（不推荐）
	agirl girl5 = agirl("梅兰芳", 30);  // 显式创建对象
	girl5.display();

	// 创建匿名对象然后赋值
	agirl girl6;
	girl6 = agirl("李清照", 28);  // 创建匿名对象然后赋值
	girl6.display();

	return 0;
}

#endif // 0
