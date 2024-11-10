#include <iostream>
using namespace std;

#if 0
int main()
{

	/*1）定义结构体描述
	定义结构体描述的语法：
		  struct 结构体名
		  {
			  成员一的数据类型  成员名一;
			  成员二的数据类型  成员名二;
			  成员三的数据类型  成员名三;
			  ......
				  成员n的数据类型  成员名n;
		  };*/
	struct func
	{
		char name[21];
		int age;
		double Long;
		char sex;
	};
	/*注意：
		结构体名是标识符。
		结构体的成员可以是任意数据类型。
		定义结构体描述的代码可以放在程序的任何地方，一般放在main函数的上面或头文件中。
		结构体成员可以用C++的类（如string），但是不提倡。
		在C++中，结构体中可以有函数，但是不提倡。
		在C++11中，定义结构体的时候可以指定缺省值。*/
	return 0;
}
#endif // 0

struct func
{
	char name[8];
	int age;
	double Long;
	char sex[4]; // X-女；Y-男。
};

#if 0
int main()
{
	// 2）创建结构体变量
	// 创建结构体变量的语法：
	// struct 结构体名 结构体变量名;
	struct func abcd;
	func abcd;
	// 也可以为结构体成员赋初始值。

	/*struct 结构体名 结构体变量名 = { 成员一的值, 成员二的值,......, 成员n的值 };*/
	struct func asds { '撒', 19, 25.9, '女' };
	/*C++11可以不写等于号。*/

	/*如果大括号内未包含任何东西或只写一个0，全部的成员都将被设置为0。
		struct 结构体名 结构体变量名 = { 0 };*/
	struct func aaa { 0 };

	/*注意：
			在C++中，struct关键字可以不写。
			可以在定义结构体的时候创建结构体变量。*/
	return 0;
}
#endif // 0

func abcd{ "西施", 18, 178, "女" }; // abcd是结构体变量名

#if 0
int main()
{
	/*3）使用结构体
		在C++程序中，用成员运算符（.）来访问结构体的每个成员。结构体中的每个成员具备普通变量的全部特征。*/
		// 语法：结构体变量名.结构体成员名;
	cout
		<< "姓名：" << abcd.name << " 年龄：" << abcd.age
		<< " 身高：" << abcd.Long << " 性别：" << abcd.sex
		<< endl;

	return 0;
}
#endif // 0

#if 1
int main()
{
	/*4）占用内存的大小
		用sizeof运算符可以得到整个结构体占用内存的大小。
		注意：整个结构体占用内存的大小不一定等于全部成员占用内存之和。*/
		/*内存对齐：#pragma pack(字节数)*/
#pragma pack(1) // 要放到前面

	/*5)清空结构体
		创建的结构体变量如果没有初始化，成员中有垃圾值。
		用memset()函数可以把结构体中全部的成员清零。（只适用于C++基本数据类型）
		bzero()函数也可以。*/
	memset(&abcd, 0, sizeof(abcd));

	/*6）复制结构体
			用memcpy()函数把结构体中全部的元素复制到另一个相同类型的结构体（只适用于C++基本数据类型）。
			也可以直接用等于号（只适用于C++基本数据类型）。*/
	memcpy(&abcd, &abcd, sizeof(abcd));
	return 0;
}
#endif // 0
