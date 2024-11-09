#include <iostream>
using namespace std;

/*
	在界面上输入数字的星期，输出对应月份的英文单词的全称，如果输入的数字不合法，给出提示。
	其它要求：
	1）用if ...else if ..实现;
	2）用 switch 实现；
	3）用字符串数组（C风格和C++风格）实现。
*/

int main()
{
	int a = 0;
	cin>>a;
//	1）用if ...else if ..实现
//	if(a == 1)
//	{
//		cout<<"Monday"<<endl;
//	}
//	else if(a == 2)
//	{
//		cout<<"Tuesday"<<endl;
//	}
//	else if(a == 3)
//	{
//		cout<<"Wednesday"<<endl;
//	}
//	else if(a == 4)
//	{
//		cout<<"Thursday"<<endl;
//	}
//	else if(a == 5)
//	{
//		cout<<"Friday"<<endl;
//	}
//	else if(a == 6)
//	{
//		cout<<"Saturday"<<endl;
//	}
//	else if(a == 7)
//	{
//		cout<<"Sunday"<<endl;
//	}
//	else
//	{
//		cout<<"输入错误"<<endl; 
//	}

//2）用 switch 实现
//switch(a)
//{
//	case 1: cout<<"Monday"<<endl;break;
//	case 2: cout<<"Tuesday"<<endl;break;
//	case 3: cout<<"Wednesday"<<endl;break;
//	case 4: cout<<"Thursday"<<endl;break;
//	case 5: cout<<"Friday"<<endl;break;
//	case 6: cout<<"Saturday"<<endl;break;
//	case 7: cout<<"Sunday"<<endl;break;
//	default: cout<<"输入错误"<<endl;break;
//}

//3）用字符串数组（C风格和C++风格）实现。
char arr1 [10][10] = {"0","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
cout<<arr1[a]<<endl;
	
	return 0;
}


