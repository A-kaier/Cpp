#include<iostream>
using namespace std;

void func1(int no, string str)    // 传值。
{
	// 参数: no 和 str 是通过值传递的。函数内部对这两个参数的修改不会影响外部变量。
	no = 8;
	// 功能 : 将 no 设置为 8，将 str 设置为 "我有一只小小鸟。"，然后输出信息。
	str = "我有一只小小鸟。";
	// 输出 : 这条信息是独立于 main 函数中的 bh 和 message 的。
	cout << "亲爱的" << no << "号：" << str << endl;
}

void func2(int* no, string* str)    // 传地址。
{
	// 参数: no 和 str 是指向 int 和 string 的指针，通过地址传递。函数内部对指针所指向的内容的修改会影响外部变量。
	*no = 8;
	// 功能 : 通过解引用（ * no 和* str）将 no 和 str 的值修改为 8 和 "我有一只小小鸟。", 然后输出信息。
	*str = "我有一只小小鸟。";
	// 输出: 显示的是 no 和 str 更新后的值。
	cout << "亲爱的" << *no << "号：" << *str << endl;
}

void func3(int& no, string& str)    // 传引用。
{
	// 参数: no 和 str 是通过引用传递的，这意味着它们直接引用外部变量，任何修改都会直接影响这些变量。
	no = 8;
	// 功能 : 修改 no 和 str 的值，并输出信息。
	str = "我有一只小小鸟。";
	// 输出 : 和之前的输出一样，但直接影响了 main 中的变量。
	cout << "亲爱的" << no << "号：" << str << endl;
}

int main()
{

	// bh 和 message 初始化为 3 和 "我是一只傻傻鸟。"。
	int bh = 3;      // 超女的编号。
	string message = "我是一只傻傻鸟。";          // 向超女表白的内容。

	// func1(bh, message); : 调用 func1 进行传值，这时 bh 和 message 的值没有改变。
	func1(bh, message);                  // 传值。
	// func2(&bh, &message); : 调用 func2，传递指向 bh 和 message 的地址，更新了它们的值。
	func2(&bh, &message);            // 传地址。
	// func3(bh, message); : 调用 func3，传递 bh 和 message 的引用，再次更新它们的值。
	func3(bh, message);                  // 传引用。
	//最后输出更新后的 bh 和 message。
	cout << "亲爱的" << bh << "号：" << message << endl;
}


