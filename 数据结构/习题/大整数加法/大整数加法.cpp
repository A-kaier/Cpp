#include <iostream>
using namespace std;

string s1,s2;
int a[201],b[201],c[201];

// ���ַ��� src ת��Ϊ�������� des�������˳�����ַ����෴
void arr(string src,int des[])
{
	// ���� 
	for(int i = 0; i < src.size();i++)
	{
		 // �ַ�ת��������ת˳��洢 
		des[src.size() - i - 1] = src[i] - '0';
	}
}

int main()
{
	cin>>s1>>s2;
	// 1.������-��ת���ַ�ת����
	arr(s1,a);
	arr(s2,b);
	// �����������ͣ���s1�ĳ��Ⱥ�s2�ĳ������� 
	int la = s1.size(), lb = s2.size();
	// 2.����c���鳤�ȣ������λ��
	int lc = max(la,lb) + 1; // ���ⷢ���������λ 
	// 3.��λ��ӵó�c����
	for(int i = 0;i < lc;i++)
	{
		/*���*/
		c[i] = a[i] + b[i] + c[i];
		/*��λ*/
		c[i + 1] += c[i] / 10;
		/*����λ*/
		c[i] %= 10;
	}
	// 4.ȥ��ǰ��0
	while(lc > 1 && c[lc] == 0) lc--;
	// �޸�Ϊ�� lc ��ʼ��i >= 0
	for(int i = lc;i >= 0;i--)
	{
		cout<<c[i];
	}

	return 0;
}


