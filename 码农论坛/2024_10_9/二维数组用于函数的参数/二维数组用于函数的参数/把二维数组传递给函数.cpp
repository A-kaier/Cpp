#include <iostream>
using namespace std;

#if 0
/*
	 ���Ҫ�� ���� �����������������������£�
	 void func(int (*p)[3], int len);
	 void func(int p[][3], int len);
*/

// 1.����һ��func�ĺ���
void func(int(*p)[3], int len)
{
	// 2.д����ѭ��
	for (int i = 0; i < len; i++)
	{
		// 3.д����ѭ��
		for (int j= 0; j< 3; j++)
		{
			cout << "p[" << i << "][" << j << "] = " << p[i][j] << "  ";
			cout << endl;
		}
	}
}

int main()
{
	// 4.дһ��2��3�е�����
	int sz[2][3] = { {11,12,13},{21,22,23} };
	// 5.����func����
	func(sz, 2);


	return 0;
}
#endif // 0
