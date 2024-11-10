#include <iostream>         // 包含头文件。
using namespace std;        // 指定缺省的命名空间。

class CGirl                 // 超女类CGirl。
{
public:
	string    name;          // 姓名。
private:
	int         age;             // 年龄。
	void setvalue(string name1, int age1);    // 设置成员变量的值。
public:
	void show()    // 显示超女的自我介绍。
	{
		cout << "姓名：" << name << "，年龄：" << age << endl;
	}
};

void CGirl::setvalue(string name1, int age1)    // 设置成员变量的值。
{
	name = name1;     age = age1;
}

int main()
{
	CGirl girl;       // 创建超女对象。
	girl.setvalue("西施", 26);     // 设置成员变量的值。
	girl.show();    // 显示超女的自我介绍。
	cout << girl.name << endl;
	// 报错 ，因为(private：)下的代码是私有的，并非公有的
	cout << girl.age << endl; 
}
