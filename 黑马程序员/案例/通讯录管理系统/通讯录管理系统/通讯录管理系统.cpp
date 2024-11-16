#include <iostream>
#include <string>
#define MAX 100
using namespace std;

void caidan()
{
	cout << "***************************" << endl;
	cout << "*****   1.�����ϵ��   *****" << endl;
	cout << "*****   2.��ʾ��ϵ��   *****" << endl;
	cout << "*****   3.ɾ����ϵ��   *****" << endl;
	cout << "*****   4.������ϵ��   *****" << endl;
	cout << "*****   5.�޸���ϵ��   *****" << endl;
	cout << "*****   6.�����ϵ��   *****" << endl;
	cout << "*****   0.�˳�ͨѶ¼   *****" << endl;
	cout << "***************************" << endl;
}

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
		cout << "�� -> 1   Ů -> 0" << endl;
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

// 2.��ʾ��ϵ��
void xslianxiren(tongxunlu* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "����ϵ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->lianxirenArray[i].l_name << "\t";
			cout << "�Ա�" << (abs->lianxirenArray[i].sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->lianxirenArray[i].age << "\t";
			cout << "�绰��" << abs->lianxirenArray[i].phone << " \t";
			cout << "��ַ��" << abs->lianxirenArray[i].zhuzhi << endl;
		}
	}
	system("pause");
	system("cls");
}

// 3.ɾ����ϵ��

int isExist(tongxunlu* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		// �ҵ��û������������
		if (abs->lianxirenArray[i].l_name == name)
		{
			return i;// �ҵ��ˣ�����������������е��±���
		}
	}
	return -1; // �������������û���ҵ������� - 1
}

void sclianxiren(tongxunlu* abs)
{
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	// ret == -1   δ�鵽
	// ret != -1  �鵽��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//���ҵ��ˣ�Ҫ����ɾ������
		for (int i = 0; i < abs->m_Size; i++)
		{
			// ����Ǩ��
			abs->lianxirenArray[i] = abs->lianxirenArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

// 4.������ϵ��
void czlianxiren(tongxunlu* abs)
{
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->lianxirenArray[ret].l_name << "\t";
		cout << "�Ա�" << abs->lianxirenArray[ret].sex << "\t";
		cout << "���䣺" << abs->lianxirenArray[ret].age << "\t";
		cout << "�绰��" << abs->lianxirenArray[ret].phone << "\t";
		cout << "סַ��" << abs->lianxirenArray[ret].zhuzhi << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

// 5.�޸���ϵ��
void xglianxiren(tongxunlu* abs)
{

	cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		// ����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->lianxirenArray[ret].l_name = name;

		// �Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1 ---- ��" << endl;
		cout << "2 ---- Ů" << endl;
		while (true)
		{
			cin >> sex;
			// �ж�
			if (sex == 1 || sex == 2)
			{
				abs->lianxirenArray[ret].sex = sex;
				break;
			}
			cout << "����������������" << endl;
		}

		// ����
		int age;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->lianxirenArray[ret].age = age;

		// �绰����
		string phone;
		cout << "������绰���룺" << endl;
		cin >> phone;
		abs->lianxirenArray[ret].phone = phone;

		//��ͥסַ
		string zhuzhi;
		cout << "�������ͥסַ��" << endl;
		cin >> zhuzhi;
		abs->lianxirenArray[ret].zhuzhi = zhuzhi;

		cout << endl;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

// �����ϵ��
void cleanlianxiren(tongxunlu* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int selete = 0; // ��ʼ���û����������

	// ����ͨѶ¼
	tongxunlu abs;
	// ��ʼ��ͨ��¼������
	abs.m_Size = 0;
	while (true) {
		caidan();
		cin >> selete;
		switch (selete) {
		case 1: // 1.�����ϵ��
			addlianxiren(&abs); // ���õ�ַ���ݣ����������β�
			break;
		case 2:// 2.��ʾ��ϵ��
			xslianxiren(&abs);
			break;
		case 3: // 3.ɾ����ϵ��
			sclianxiren(&abs);
			break;
		case 4: // 4.������ϵ��
			czlianxiren(&abs);
			break;
		case 5: // 5.�޸���ϵ��
			xglianxiren(&abs);
			break;
		case 6: // 6.�����ϵ��
			cleanlianxiren(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}
