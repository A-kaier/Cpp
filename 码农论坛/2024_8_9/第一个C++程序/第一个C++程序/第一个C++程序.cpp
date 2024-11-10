#include <iostream>
// 指定缺省的命名空间
using namespace std; // 当有该指令时，输出语句不用写std
#if 0
int main()
{
	std::cout << "Hello World!\n";
	// std::cout					向控制台输出内容的指令
	// <<							输出的运算符
	// " "								字符串内容的边界符
	// Hello World!				输出的内容
	// \n								换行
	// ；								结束
	return 0;
}
#endif // 0

#if 0
int main()
{
	string name = "西施";
	int age = 25;
	double weight = 48.6;
	//char sex = 'X';
	string sex = "女";
	bool yz = true;// true 代表漂亮 false 代表不漂亮

	cout << "姓名：" << name
		<< "，年龄：" << age
		<< "\n体重：" << weight
		<< "，性别：" << sex
		<< "\n        颜值：" << yz
		<< endl; // 结束语句

	return 0;
}
#endif // 1

 