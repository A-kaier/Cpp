#include<iostream>
using namespace std;

class lifangti
{
public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}

	//��ȡ���������
	int limianji()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//��ȡ���������
	int litiji()
	{
		return m_L * m_W * m_H;
	}

	// ���ó�Ա�����ж������������Ƿ����
	bool isSameByclass(lifangti& C)
	{
		if (m_L == C.getL() && m_W == C.getW() && m_H == C.getH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	int m_L; // ��
	int m_W; // ��
	int m_H; // ��
};

// ����ȫ�ֺ����ж������������Ƿ����
bool isSame(lifangti& C1, lifangti& C2) // �ж������������Ƿ���ȣ���Ҫ������������
{
	if (C1.getL() == C2.getL() && C1.getW() == C2.getW() && C1.getH() == C2.getH())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	lifangti c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1�����Ϊ��" << c1.limianji() << endl;
	cout << "c1�����Ϊ��" << c1.litiji() << endl;

	lifangti c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	cout << endl;

	// ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "ȫ�ֺ����жϣ�c1��c2���" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����жϣ�c1��c2�����" << endl;
	}

	cout << endl;

	// ��Ա�����ж�
	ret = c1.isSameByclass(c2);
	if (ret)
	{
		cout << "��Ա�����жϣ�c1��c2���" << endl;
	}
	else
	{
		cout << "��Ա�����жϣ�c1��c2�����" << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}