#include<iostream>
#include<string>
using namespace std;

/*用一个已存在的对象创建新的对象语法：
	类名 新对象名(已存在的对象名);
	类名 新对象名 = 已存在的对象名;
拷贝构造函数的语法：
	类名(const 类名& 对象名) { ...... }*/

 // const 不能修改源代码

class agirl {
private:
	string name;
	int age;
public:
	// 普通构造函数
	agirl(const string& name, int age) : name(name), age(age) 
	{
		cout << "普通构造函数被调用: " << name << ", 年龄: " << age << endl;
	}

	// 拷贝构造函数
	agirl(const agirl& other) 
	{
		name = other.name;
		age = other.age;
		cout << "拷贝构造函数被调用: " << name << ", 年龄: " << age << endl;
	}

	// 显示成员函数
	void display() const // 用于输出对象的 name 和 age。
	{
		cout << "名字: " << name << ", 年龄: " << age << endl;
	}
};

 // 返回agirl对象的函数
agirl createGirl()
{
	agirl temp("杨贵妃", 25);
	return temp; // 返回时可能调用拷贝构造函数
}

int main()
{
	// 创建一个对象，调用普通构造函数
	agirl girl1("西施", 20);
	girl1.display(); // 调用display函数，进行输出

	// 使用已存在的对象创建新对象，调用拷贝构造函数
	//agirl girl2 = girl1;  
	agirl girl2(girl1); // 与上面的代码意思是一样的
	girl2.display();

	// 通过函数传递对象
	// 此处会调用拷贝构造函数
	agirl girl3("王嫱", 22);
	girl3.display();
	agirl girl4(girl3); // 显示使用拷贝构造函数
	girl4.display();

	// 返回对象时调用拷贝构造函数
	agirl girl5 = createGirl();  // createGirl返回一个agirl对象
	girl5.display();

	return 0;
}
