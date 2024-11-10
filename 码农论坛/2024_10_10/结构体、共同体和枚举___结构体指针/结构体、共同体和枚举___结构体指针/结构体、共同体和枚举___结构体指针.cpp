#include <iostream>
#define _CRT_SECURE_NO_WARNINGS // 如果要使用 C 标准库的字符串函数，需要加上这行代码
using namespace std;
#include <string> // 可以动态地改变其大小,比如：std::string name = "Alice" (定义字符串)

#if 0

struct st_girl
{
	char name[21];	 // 姓名。
	int age;				// 年龄。
	double weight;  // 体重（kg）。
	char sex;			// 性别：X-女;Y-男。
	bool yz;		  // 颜值：true-漂亮；false-不漂亮
};

void func(const st_girl* pst)
{
	cout << "姓名:" << pst->name << ",年龄:" << pst->age << "，体重:" << pst->weight;
	cout << "，性别：" << pst->sex << "，颜值:" << pst->yz << endl;
}


int main()
{
	// st_girl stgirl={"西施",26,33.8,'X',true};        // 创建结构体变量。
	st_girl* stgirl = new st_girl({ "西施",26,33.8,'X',true });
	// memset(stgirl, 0, sizeof(st_girl));

	cout << "姓名：" << stgirl->name << "，年龄：" << stgirl->age << "，体重：" << stgirl->weight
		<< "，性别：" << stgirl->sex << "，颜值：" << stgirl->yz << endl;

	func(stgirl);

	cout << "姓名：" << stgirl->name << "，年龄：" << stgirl->age << "，体重：" << stgirl->weight
		<< "，性别：" << stgirl->sex << "，颜值：" << stgirl->yz << endl;

	delete stgirl;


	return 0;
}
#endif // 0

#if 1
// 1.定义一个结构体  (struct)
struct student
{
	string name;
	int age;
	double Long;

};
int main()
{
	// 2. 声明结构体指针
	student* stu; // 声明一个指向 Student 结构体的指针

	// 3. 动态分配结构体
	stu = new student; // 动态分配内存

	// 4. 访问结构体成员  (使用 -> 运算符访问结构体的成员)
	stu->name = "abcd";
	stu->age = 18;

	// 5.使用结构体指针
	cout << "name：" << stu->name << endl;
	cout << "age：" << stu->age << endl;

	// 6.释放内存
	delete stu; // 可以释放占用的内存，防止内存泄漏

	return 0;
}



#endif // 0
    