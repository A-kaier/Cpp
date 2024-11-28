#include <iostream>
using namespace std;

/*高精度数值*/
string s1, s2;
/*s1的转换、s2的转换*/
int a[201] = {0}, b[201] = {0};
/*高精度a和高精度b之和*/
int c[202] = {0}; // 增加数组大小以防溢出

// 将字符串 src 转换为整数数组 des，数组的顺序与字符串相反
void arr(string src, int des[])
{
    for (int i = 0; i < src.size(); i++)
    {
        des[src.size() - i - 1] = src[i] - '0';
    }
}

/**
 * 主函数，负责输入两个高精度数字并计算它们的和
 * 1. 将输入的字符串转换为整数数组
 * 2. 计算相加的结果并存储到c数组
 * 3. 去除前导零并打印最终结果
 */
int main()
{
    cin >> s1 >> s2;
    // 1.个对齐-反转，字符转整型
    arr(s1, a);
    arr(s2, b);
    int la = s1.size(), lb = s2.size();
    // 2.计算c数组长度，按最长数位算
    int lc = max(la, lb) + 1; /*进位*/
    // 3.对位相加得出c数组
    for (int i = 0; i < lc; i++) // 改为 < lc 避免越界
    {
        c[i] = a[i] + b[i] + c[i]; /*相加*/
        c[i + 1] += c[i] / 10; /*进位*/
        c[i] %= 10; /*留个位*/
    }
    // 4.去除前导0
    while (lc > 1 && c[lc] == 0) lc--;
    // 倒叙打印
    for (int i = lc; i >= 0; i--) // 修改为从 lc 开始，i >= 0
    {
        cout << c[i];
    }
    return 0;
}

