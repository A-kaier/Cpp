#include<iostream>
#include "tianjia.h"
#include "caidan.h"
#include "shanchu.h"
using namespace std;

void shanchu()
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
			break;
		case 3: // 3.ɾ����ϵ��
			break;
		case 4: // 4.������ϵ��
			break;
		case 5: // 5.�޸���ϵ��
			break;
		case 6: // 6.�����ϵ��
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return;
		default:
			break;
		}
	}
}
