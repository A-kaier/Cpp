#include <iostream>
using namespace std;

/* 空指针：指针变量指向内存中编号为0的空间
	用途：初始化指针变量
	注意：空指针指向的内存是不可以访问的*/

#if 0
int main()
{
	//空指针
	//1、空指针用于给指针变量进行初始化
	int* p = NULL;
	//2、空指针是不可以进行访问的
	//0~255之间的内存编号是系统占用的，因此不可以访问
	*p = 100;


	system("pause");


	return 0;
}
#endif // 0



/*野指针：指针变量指向非法的内存空间*/
#if 1
int main() {
	//指针变量p指向内存地址编号为0x1100的空间
	int* p = (int*)0x1100;
	//访问野指针报错
	cout << *p << endl;
	system("pause");

	return 0;
}
#endif // 0
