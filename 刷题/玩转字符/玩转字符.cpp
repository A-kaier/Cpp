#include <iostream>
using namespace std;

// 1���ӽ���������һ����ĸ����ʾ����ĸ�������ĸ���������û����ĸ��������ʾ��
// 2���Զ���һ�����������ַ���'0����1'��'2'��'3'��'4'��'5'��'6'��'7"��'8'��'9'ת��Ϊ������0��1��2��3��4��5��6��7��8��9����������if...else if...��switch��䡣
// 3��ʵ���ַ��������ÿ⺯���Ĺ��� 
// int _isalpha(int ch);//��ch����ĸ��'A'-Z"a'-z�����ط�O�����򷵻�0��
// int _isalnum(int ch);//��ch����ĸ��A'-Z��a'-z�������֣�0-9'�������ط�0�����򷵻�0��
// int _isdigit(int ch);//��ch�����֣�0'-9'�����ط�0�����򷵻�0����Դ������Git��������
// int _islower(int ch);//��ch��Сд��ĸ��a'-z�����ط�0�����򷵻�0��
// int _isupper(int ch);//��ch�Ǵ�д��ĸ��A'-Z"�����ط�O�����򷵻�0��
// int _tolower_(int ch);//��ch�Ǵ�д��ĸ��A'-Z'�����򷵻�����Сд��ĸ��'a'-z'����




// ��ĸ 
//int main()
//{
//	char a;
//	cout<<"������һ����ĸ��";
//	cin>>a;
//	if(!((a >= 'A' && a <= 'Z') || (a >= 'a'&& a <= 'z')))
//	{
//		cout<<"������ַ�������ĸ"<<endl;
//	}
//	if(a == 'Z' && a == 'z')
//	{
//		cout<<"����û����ĸ��"<<endl;
//	}
//	
//	cout<<a<<"�������ĸ�ǣ�"<<(char)(a + 1)<<endl;
//	
//	return 0;
//}

// ����

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


// �⺯�� 
int _isalpha(int ch);//��ch����ĸ��'A'-Z"a'-z�����ط�O�����򷵻�0��
int _isalnum(int ch);//��ch����ĸ��A'-Z��a'-z�������֣�0-9'�������ط�0�����򷵻�0��
int _isdigit(int ch);//��ch�����֣�0'-9'�����ط�0�����򷵻�0����Դ������Git��������
int _islower(int ch);//��ch��Сд��ĸ��a'-z�����ط�0�����򷵻�0��
int _isupper(int ch);//��ch�Ǵ�д��ĸ��A'-Z"�����ط�O�����򷵻�0��
int _tolower_(int ch);//��ch�Ǵ�д��ĸ��A'-Z'�����򷵻�����Сд��ĸ��'a'-z'����
//��ch��Сд��ĸ��a'-z�����򷵻����Ĵ�д��ĸ��A'-Z"����
int _toupper_(int ch)
{
	if(ch>='a'&&ch<='z')return ch-32;
	return ch;
}

 int main()
 {
 	char CC=_toupper_('X');cout<<"CC="<<CC<<endl;
 }







