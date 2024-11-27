#include<iostream>
using namespace std;

class lifangti
{
public:
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取宽
	int getW()
	{
		return m_W;
	}
	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}

	//获取立方体面积
	int limianji()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//获取立方体体积
	int litiji()
	{
		return m_L * m_W * m_H;
	}

	// 利用成员函数判断两个立方体是否相等
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
	int m_L; // 长
	int m_W; // 宽
	int m_H; // 高
};

// 利用全局函数判断两个立方体是否相等
bool isSame(lifangti& C1, lifangti& C2) // 判断两个立方体是否相等，想要传俩个立方体
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

	cout << "c1的面积为：" << c1.limianji() << endl;
	cout << "c1的体积为：" << c1.litiji() << endl;

	lifangti c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	cout << endl;

	// 全局函数判断
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "全局函数判断：c1和c2相等" << endl;
	}
	else
	{
		cout << "全局函数判断：c1和c2不相等" << endl;
	}

	cout << endl;

	// 成员函数判断
	ret = c1.isSameByclass(c2);
	if (ret)
	{
		cout << "成员函数判断：c1和c2相等" << endl;
	}
	else
	{
		cout << "成员函数判断：c1和c2不相等" << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}