#include <iostream>
using namespace std;

//有两个任务：
//1）采用一个while循环，把1到100之间的数值累加起来。
//2）采用一个for循环，把用户每次从键盘输入的数值累加起来，如果总和超过了5000，循环结
//束。

int main()
{
	// for循环
	int i = 0;
	int tmp = 0;
	for(i = 0;i<= 5000;)
	{
		int tmp2 = 0;
		cout<<"请输入值：";
		cin>>tmp2;
		i = i + tmp2;
	}
	cout<<"数值已到5000，程序已停止"<<endl;
	cout<<"最终数值是："<<i<<endl; 
cout<<endl;
//	 while循环
	int j = 1;
	while(j < 101)
	{
		tmp = tmp + j;
		j++;
	}
	cout<<"tmp = "<<tmp<<endl;
	
	return 0;
}
