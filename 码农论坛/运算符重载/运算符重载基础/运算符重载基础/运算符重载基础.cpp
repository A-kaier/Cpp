#include<iostream>
using namespace std;

/*函数返回类型错误：
	确保运算符重载函数的返回类型与运算符的使用意图一致。例如，对于加法运算符 operator+，应该返回一个 CGirl 对象或其引用。
	CGirl operator+(const CGirl& other);*/

	/*友元函数的声明问题：
	如果你将运算符重载定义为友元函数，确保在类内正确声明并且实现与声明一致。声明和实现的参数类型必须完全匹配。
		friend CGirl operator+(const CGirl& g, int score);*/

		/*引用返回问题：
			如果返回引用，确保返回的引用是有效的，不要返回局部变量的引用。返回对象自身的引用时，可以使用* this。
					CGirl& operator+(CGirl& g, int score) {
						g.m_score += score; // 正确
						return g; // 返回自身引用
					}*/

// CGirl 类表示女孩的属性和行为
class CGirl
{
	friend CGirl& operator+(CGirl& g, int score);
	friend CGirl& operator+(int score, CGirl& g);
	friend CGirl& operator+(CGirl& g1, CGirl& g2);

private:
	int m_sg;        // 身高。
	int m_score;     // 分数。
public:
	string m_name;   // 姓名

	// 构造函数，初始化姓名、身高和分数
	CGirl()
	{
		m_name = "西施";
		m_sg = 87;
		m_score = 30;
	}

	// 显示女孩的姓名、身高和分数
	void show()
	{
		cout << "姓名：" << m_name << "，身高：" << m_sg << "，评分：" << m_score << endl;
	}

	// 友元函数的定义
	// 重载运算符 + ，用于将得分加到女孩的分数中
	friend CGirl& operator+(CGirl& g, int score)
	{
		g.m_score += score; // 增加得分
		return g; // 返回自身的引用
	}

	// 重载运算符 + ，用于将得分加到女孩的分数中
	friend CGirl& operator+(int score, CGirl& g)
	{
		g.m_score += score; // 增加得分
		return g; // 返回自身的引用
	}

	// 重载运算符 + ，用于将一个女孩的分数加到另一个女孩的分数中
	friend CGirl& operator+(CGirl& g1, CGirl& g2)
	{
		g1.m_score += g2.m_score; // 将g2的得分加到g1
		return g1; // 返回g1的引用
	}
};

// 主函数
int main()
{
	CGirl girl1;  // 创建第一个女孩对象
	CGirl girl2;  // 创建第二个女孩对象
	girl1.show(); // 显示第一个女孩的信息
	girl2.show(); // 显示第二个女孩的信息

	girl1 + 10;  // 使用定义的运算符重载
	girl1.show(); // 应该能看到分数增加后的输出

	CGirl g;
	g = g + 10; // 加分
	g.show();   // 显示超女的信息

	CGirl g2;
	g = g + g2; // 将 g2 的得分加到 g
	g.show();   // 显示超女的信息
	return 0;

	return 0;
}
