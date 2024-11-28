
#include<iostream>
using namespace std;

// 定义字符串变量
string s1, s2;
// 定义整数数组，分别用于存储不同的数据
int a[201] = { 0 }, b[201] = { 0 }, c[201] = { 0 }; // 初始化为0

// 将字符串转换为整数数组
void arr(string src, int des[])
{
	for (int i = 0; i < src.size(); i++)
	{
		des[src.size() - 1 - i] = src[i] - '0';
	}
}

// 比较两个字符串的大小，首先根据长度进行比较
// 长度相同则按字典顺序比较
bool cmpster(string str1, string str2)
{
	if (str1.size() != str2.size())
	{
		return str1.size() >= str2.size();
	}
	else
	{
		return str1 >= str2;
	}
}

// 主函数，执行大数减法运算
int main()
{
	cin >> s1 >> s2;
	// 比较两个字符串 s1 和 s2，如果它们不相等，则交换二者并输出 "-"
	if (!cmpster(s1, s2))
	{
		swap(s1, s2);
		cout << "-";
	}

	// 函数用于获取字符串 s1 和 s2 的大小，并将其存储在 la 和 lb 中
	// 同时调用 arr 函数对 s1 和 s2 进行处理
	int la = s1.size(), lb = s2.size();
	arr(s1, a);
	arr(s2, b);
	int lc = max(la, lb);

	// 遍历从 0 到 lc 的所有整数
	for (int i = 0; i <= lc; i++)
	{
		// 如果数组 a 中的某个元素小于数组 b 中相应的元素
		// 则对 a 的数组内容 + 1后减去前面的整数
		if (a[i] < b[i])
		{
			a[i + 1]--;
			a[i] += 10;
		}

		// 计算数组a和b对应元素的差值，并将结果存储在数组c中
		c[i] = a[i] - b[i];
	}

	// 循环减少 lc 的值，直到 lc 大于 1 且 c[lc] 不等于 0
	while (lc > 0 && c[lc] == 0) lc--;

	// 该代码段用于从 lc 到 0 反向输出字符数组 c 的元素
	for (int i = lc; i >= 0; i--)
	{
		cout << c[i];
	}

	return 0;
}