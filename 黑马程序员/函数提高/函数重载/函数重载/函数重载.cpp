#include<iostream>
using namespace std;

 /*void func()
{
	cout << "func �ĵ��ã�" << endl;
}

void func(int a)
{
	cout << "func( int a ) �ĵ��ã�" << endl;
}

void func(double a)
{
	cout << "func( double a ) �ĵ��ã�" << endl;
}

void func(int a, double b)
{
	cout << "func( int a, double b ) �ĵ��ã�" << endl;
}

void func(double b, int a)
{
	cout << "func( double b, int a) �ĵ��ã�" << endl;
}*/

//��������ֵ��������Ϊ������������
 /*int func(double a, int b)
{
	cout << "func (double a ,int b)�ĵ��ã�" << endl;
}*/

 /*int main()
{
	func();
	func(666);
	func(66.66);
	func(666, 66.66);
	func(66.66, 666);

	system("pause");
	return 0;
}*/

//��������ע������
//1��������Ϊ��������
void func(int& a)
{
	cout << "func (int &a) ���� " << endl;
}

void func(const int& a)
{
	cout << "func (const int &a) ���� " << endl;
}

//2������������������Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) ����" << endl;
}

void func2(int a)
{
	cout << "func2(int a) ����" << endl;
}

int main() {

	int a = 10;func(a); //������const

	func(10);//������const

	//func2(10); //����Ĭ�ϲ����������壬��Ҫ����

	system("pause");

	return 0;
}

