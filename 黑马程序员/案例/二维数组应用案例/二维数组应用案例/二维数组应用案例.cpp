#include<iostream>
#include<string>
using namespace std;



/*案例描述：有三名同学（张三，李四，王五）
在一次考试中的成绩分别如下表，请分别输出三名同学的总成绩
			 语文           数学               英语
张三      100            100                100
李四      90               50                 100
王五      60               70                  80*/

int main()
{
	int arr1[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三", "李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr1[i][j];
		}
		//cout << "第" << i + 1 << "个人的总分为：" << sum << endl;
		cout << names[i] << "个人的总分为：" << sum << endl;
	}


	return 0;
}