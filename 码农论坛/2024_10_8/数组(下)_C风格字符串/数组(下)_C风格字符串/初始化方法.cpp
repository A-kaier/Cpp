#include <iostream>
using namespace std;

#if 0

注意事项：
a）字符串的结尾标志是0，按照约定，在处理字符串的时候，会从起始位置开始搜索0，一直找下去，找到为止（不会判断数组是否越界）。
b）结尾标志0后面的都是垃圾内容。
c）字符串在每次使用前都要初始化，减少入坑的可能，是每次，不是第一次。
d）不要在子函数中对字符指针用sizeof运算，所以，不能在子函数中对传入的字符串进行初始化，除非字符串的长度也作为参数传入到了子函数中。
e）在VS中，如果要使用C标准的字符串操作函数，要在源代码文件的最上面加
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char name[20]; // 声明一个最多存放20个英文字符或十个中文的字符串。
	char name1[11] = "hello";// 初始内容为hello，系统会自动添加0。
	char name2[] = { "hello" };// 初始内容为hello，系统会自动添加0，数组长度是6。
	char name3[11] = { "hello" };// 初始内容为hello，系统会自动添加0。
	char name4[11]{ "hello" };// 初始内容为hello，系统会自动添加0。C++11标准。
	char name5[11] = { 0 };// 把全部的元素初始化为0。
	return 0;
}
#endif // 0