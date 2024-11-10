#include<iostream>
#include<cstring>


using namespace std;

// 浅拷贝
#if 0
class Shallow
{
public:
	char* data;

	// 构造函数
	Shallow(const char* value)
	{
		data = new char[strlen(value) + 1]; // 分配内存
		strcpy_s(data, strlen(value) + 1, value); // 复制数据
	}

	// 拷贝构造函数（浅拷贝）
	Shallow(const Shallow& other)
	{
		data = other.data; // 仅复制指针
	}

	// 析构函数
	~Shallow()
	{
		delete[] data; // 释放内存
	}
};

int main()
{
	Shallow a1("Hello");
	Shallow a2 = a1; // 浅拷贝

	cout << "a1 data：" << a1.data << endl;
	cout << "a2 data：" << a2.data << endl;

	// 修改 a1 的数据
	a1.data[0] = 'h';
	cout << "After modifying a1:" << endl;
	cout << "a1 data: " << a1.data << endl;
	cout << "a2 data: " << a2.data << endl; // a2 的数据没有被修改

	return 0;
}
#endif // 0

// 深拷贝
#if 1

class Deep {
public:
	char* data;

	// 构造函数
	Deep(const char* value) {
		data = new char[strlen(value) + 1]; // 分配内存
		strcpy_s(data, strlen(value) + 1, value); // 使用 strcpy_s
	}

	// 拷贝构造函数（深拷贝）
	Deep(const Deep& other) {
		data = new char[strlen(other.data) + 1]; // 为新对象分配内存
		strcpy_s(data, strlen(other.data) + 1, other.data); // 确保这里有三个参数
	}

	// 析构函数
	~Deep() {
		delete[] data; // 释放内存
	}
};

int main() {
	Deep obj1("Hello");
	Deep obj2 = obj1; // 深拷贝

	std::cout << "obj1 data: " << obj1.data << std::endl;
	std::cout << "obj2 data: " << obj2.data << std::endl;

	// 修改 obj1 的数据
	obj1.data[0] = 'h';
	std::cout << "After modifying obj1:" << std::endl;
	std::cout << "obj1 data: " << obj1.data << std::endl;
	std::cout << "obj2 data: " << obj2.data << std::endl; // obj2 的数据没有被修改

	return 0;
}

#endif // 0
