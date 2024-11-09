#include <iostream>
using namespace std;

//  1）用一个while循环，接受从键盘输入的整数，
// 如果输入的整数不在1到100之间(包括1和100），认为无效，丢弃；
// 如果输入的整数在1到100之间，则把每次输入的值累加起来；如果输入的整数为0，跳出循环。最后，显示有效数据的个数和总和。

// 2）输出1到100之间（包括1和100）的能整除5的数字。

//	while循环
/*


int main()
{

	int i = 0; // 存放键盘输入的整数 
	int tmp = 0; // 存放数据之和 
	int num = 0; // 存放有效数据  
	while(true)
	{
		cout<<"请输入值：";cin>>i;
		if(i == 0) break;
		if(i<1 && i>100) continue; // continue跳过本次，往下继续
		// 整数在1~100之间的有效数据 
		num++;
		tmp += i;
	} 
	cout<<endl;
	cout<<"有效数据的个数："<<num<<",有效数据的总合："<<tmp<<endl;
	
	return 0;
}
*/

// 整除5
int main()
{
	for(int i = 1;i <= 100;i++)
	{
		if(i % 5 == 0)
		{
			cout<<"i = "<<i<<endl;
		}
	}
} 

















