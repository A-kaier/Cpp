#include<iostream>
using namespace std;

// ���ã� �����������
// �﷨����������& ���� = ԭ��

 /*
	 ���ñ����ʼ��
	 �����ڳ�ʼ���󣬲����Ըı�
*/

int main()
{
	int a = 10;
	cout << "a = " << a << endl;

	cout << endl;

	int& b = a;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << endl;

	int c = 30;
	b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << endl;

	/*ע������*/
	int a2 = 10;
	int b2 = 20;
	//int& c2; // ����

	int& c2 = a2;
	c2 = b2;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;
	cout << "c2 = " << c2 << endl;

	system("pause");
	return 0;
}