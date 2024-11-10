#include<iostream>
using namespace std;

	/*class 类名
{
public:
	成员一的数据类型  成员名一;
	成员二的数据类型  成员名二;
	成员三的数据类型  成员名三;
	......
		成员n的数据类型  成员名n;
};*/

	/*在 C++ 中，双冒号::用于：
指明成员函数或变量的归属类。
避免名称冲突。
提高代码可读性和结构化。*/

class CGirl  // 定义了一个名为 CGirl 的类，用于封装数据（成员变量）和操作数据（成员函数）。
{
public: // 访问控制符，表示下面的成员可以被类外的代码访问。
	string name;
	int	     age;
	/*声明了一个成员函数 setvalue用于设置 name 和 age 的值。
		函数接受两个参数：name1 和 age1，类型分别为 string 和 int。*/
	void setvalue(string name1, int age1);
	void show()// 定义了一个成员函数 show，用于输出女孩的姓名和年龄。
	{
		cout << "姓名：" << name << "，年龄：" << age << endl;
	}
};

 /*CGirl::setvalue：定义了类 CGirl 的成员函数 setvalue 
 这个函数用于将外部传入的姓名和年龄赋值给类的成员变量 name 和 age。*/
void CGirl::setvalue(string name1, int age1)  
{
	name = name1;  // 将传入的参数 name1 赋值给成员变量 name
	age = age1;   // 将传入的参数 age1 赋值给成员变量 age
}

int main()
{
	CGirl girl;// 创建一个名为 girl 的 CGirl 对象
	girl.setvalue("西施", 18);// 调用 setvalue 函数，设置 name 和 age
	girl.show(); // 调用 show 函数，输出 girl 对象的姓名和年龄

	return 0;
}