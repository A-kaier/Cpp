#include <iostream>
using namespace std;

string s1,s2;
int a[201],b[201],c[201];

// 将字符串 src 转换为整数数组 des，数组的顺序与字符串相反
void arr(string src,int des[])
{
	// 遍历 
	for(int i = 0; i < src.size();i++)
	{
		 // 字符转整数、反转顺序存储 
		des[src.size() - i - 1] = src[i] - '0';
	}
}

int main()
{
	cin>>s1>>s2;
	// 1.个对齐-反转，字符转整型
	arr(s1,a);
	arr(s2,b);
	// 定义两个整型，将s1的长度和s2的长度拿走 
	int la = s1.size(), lb = s2.size();
	// 2.计算c数组长度，按最长数位算
	int lc = max(la,lb) + 1; // 避免发生溢出，进位 
	// 3.对位相加得出c数组
	for(int i = 0;i < lc;i++)
	{
		/*相加*/
		c[i] = a[i] + b[i] + c[i];
		/*进位*/
		c[i + 1] += c[i] / 10;
		/*留个位*/
		c[i] %= 10;
	}
	// 4.去除前导0
	while(lc > 1 && c[lc] == 0) lc--;
	// 修改为从 lc 开始，i >= 0
	for(int i = lc;i >= 0;i--)
	{
		cout<<c[i];
	}

	return 0;
}


