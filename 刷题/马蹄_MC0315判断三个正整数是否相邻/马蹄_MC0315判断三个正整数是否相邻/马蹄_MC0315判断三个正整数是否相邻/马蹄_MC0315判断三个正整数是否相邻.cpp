#include<iostream>
#include<algorithm> // 用于 sort()

using namespace std;

int main()
{
	int a[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}

	// 排序数组：将数组 a 排序，使得数组中的数字按升序排列。
	sort(a, a + 3);

	// 判断是否是连续的数字
	if (a[0] + 1 == a[1] && a[1] + 1 == a[2]) {
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}

	return 0;
}