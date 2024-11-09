#include <iostream>
using namespace std;

// 1）从界面上输入一个字母，显示该字母后面的字母，如果后面没有字母，给出提示。
// 2）自定义一个函数，把字符的'0、‘1'、'2'、'3'、'4'、'5'、'6'、'7"、'8'、'9'转换为整数的0、1、2、3、4、5、6、7、8、9。不允许用if...else if...和switch语句。
// 3）实现字符操作常用库函数的功能 
// int _isalpha(int ch);//若ch是字母（'A'-Z"a'-z）返回非O，否则返回0。
// int _isalnum(int ch);//若ch是字母（A'-Z，a'-z）或数字（0-9'），返回非0，否则返回0。
// int _isdigit(int ch);//若ch是数字（0'-9'）返回非0，否则返回0。智源管理器Git更改属性
// int _islower(int ch);//若ch是小写字母（a'-z）返回非0，否则返回0。
// int _isupper(int ch);//若ch是大写字母（A'-Z"）返回非O，否则返回0。
// int _tolower_(int ch);//若ch是大写字母（A'-Z'），则返回它的小写字母（'a'-z'）。




// 字母 
//int main()
//{
//	char a;
//	cout<<"请输入一个字母：";
//	cin>>a;
//	if(!((a >= 'A' && a <= 'Z') || (a >= 'a'&& a <= 'z')))
//	{
//		cout<<"输入的字符不是字母"<<endl;
//	}
//	if(a == 'Z' && a == 'z')
//	{
//		cout<<"后面没有字母了"<<endl;
//	}
//	
//	cout<<a<<"后面的字母是："<<(char)(a + 1)<<endl;
//	
//	return 0;
//}

// 函数

//int ctoi(const char ch)
//{
//	return ch - '0';
//}
//
//int main()
//{
//	cout<<ctoi('0')<<endl;
//	cout<<ctoi('1')<<endl;
//	cout<<ctoi('2')<<endl;
//	cout<<ctoi('3')<<endl;
//	cout<<ctoi('4')<<endl;
//	cout<<ctoi('5')<<endl;
//	cout<<ctoi('6')<<endl;
//	cout<<ctoi('7')<<endl;
//	cout<<ctoi('8')<<endl;
//	cout<<ctoi('9')<<endl;
//	
//	return 0;
//} 


// 库函数 
int _isalpha(int ch);//若ch是字母（'A'-Z"a'-z）返回非O，否则返回0。
int _isalnum(int ch);//若ch是字母（A'-Z，a'-z）或数字（0-9'），返回非0，否则返回0。
int _isdigit(int ch);//若ch是数字（0'-9'）返回非0，否则返回0。智源管理器Git更改属性
int _islower(int ch);//若ch是小写字母（a'-z）返回非0，否则返回0。
int _isupper(int ch);//若ch是大写字母（A'-Z"）返回非O，否则返回0。
int _tolower_(int ch);//若ch是大写字母（A'-Z'），则返回它的小写字母（'a'-z'）。
//若ch是小写字母（a'-z），则返回它的大写字母（A'-Z"）。
int _toupper_(int ch)
{
	if(ch>='a'&&ch<='z')return ch-32;
	return ch;
}

 int main()
 {
 	char CC=_toupper_('X');cout<<"CC="<<CC<<endl;
 }







