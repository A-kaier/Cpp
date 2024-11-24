#include<iostream>
#include<algorithm> // 用于 sort()

using namespace std;

int main()
{
    int a[3];

    // 读取三个整数
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    // 排序数组
    sort(a, a + 3);

    // 判断是否是连续的数字
    if (a[0] + 1 == a[1] && a[1] + 1 == a[2]) {
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }

    return 0;
}

