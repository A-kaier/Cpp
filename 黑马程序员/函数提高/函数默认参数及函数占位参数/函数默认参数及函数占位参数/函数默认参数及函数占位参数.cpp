#include<iostream>
using namespace std;
//1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
//2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
int func(int a, int b = 10, int c = 10)
{
	return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a = 10, int b)
{
	return a + b;
}

void func3(int a, int) {
	cout << "this is func" << endl;
}

int main()
{
	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	func3(10, 10); //ռλ���������
	func3(10); //ռλ���������

	system("pause");
	return 0;
}