#include <iostream>
#include <string>
#include "tianjia.h"
#define MAX 100
using namespace std;

 //��ϵ�˽ṹ��
struct lianxiren
{
	int sex; // �Ա���1Ů0
	int age; // ����
	string l_name; // ����
	string phone; // �绰
	string zhuzhi; // ��ͥסַ
};

// ͨѶ¼�ṹ��
struct tongxunlu
{
	struct lianxiren lianxirenArray[MAX];
	int m_Size; // ͨѶ¼����Ա����
};

// ��װ�����ϵ�˺���
void addlianxiren(tongxunlu* abs)
{
	// �жϵ绰���Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		// ����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->lianxirenArray[abs->m_Size].l_name = name;

		// �Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		while (true)
		{
			cin >> sex;
			// �ж�
			if (sex == 1 || sex == 2)
			{
				abs->lianxirenArray[abs->m_Size].sex = sex;
				break;
			}
			cout << "����������������" << endl;
		}

		// ����
		int age;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->lianxirenArray[abs->m_Size].age = age;

		// �绰����
		string phone;
		cout << "������绰���룺" << endl;
		cin >> phone;
		abs->lianxirenArray[abs->m_Size].phone = phone;

		//��ͥסַ
		string zhuzhi;
		cout << "�������ͥסַ��" << endl;
		cin >> zhuzhi;
		abs->lianxirenArray[abs->m_Size].zhuzhi = zhuzhi;

		// ����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");

	}
}
