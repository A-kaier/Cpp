#include <iostream>
using namespace std;
// gsort0函数用于对各种数据类型的数组进行排序。

// 函数的原型：
// 第一个参数：数组的起始地址。
// 第二个参数：数组元素的个数（数组长度）。
// 第三个参数：数组元素的大小（sizeof(数组的数据类型）。
//	第四个参数：回调函数的地址。
//	回调函数决定了排序的顺序，声明如下：
//	nt comar(const vid * 1, const vid*)
//	1）如果函数的返回值 < 0，那么 p1所指向元素会被排在 p2 所指向元素的前面。
//	2）如果函数的返回值 = 0，那么 p1 所指向元素与 p2 所指向元素的顺序不确定。
//	3）如果函数的返回值>0，那么 p1 所指向元素会被排在 p2 所指向元素的后面。
//	void qsort(void* base, sizet nmemb, size_t size, int (*compar)(const void*, const void*)

// 升序的回调函数
int num(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
// 降序的回调函数
int num2(const void* p1, const void* p2) {
	return *(int*)p2 - *(int*)p1;
}

int main()
{
	int a[8] = { 4,1,7,5,9,3,8,2 };
	qsort(a, sizeof(a) / sizeof(int), sizeof(int), num); // 对数组 a 进行升序
	for (int i = 0; i < 8; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	cout << endl; // 换行
	qsort(a, sizeof(a) / sizeof(int), sizeof(int), num2);  // 对数组 a进行降序排序
	for (int i = 0; i < 8; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	return 0;
}