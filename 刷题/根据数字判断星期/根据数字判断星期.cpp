#include <iostream>
using namespace std;

/*
	�ڽ������������ֵ����ڣ������Ӧ�·ݵ�Ӣ�ĵ��ʵ�ȫ�ƣ������������ֲ��Ϸ���������ʾ��
	����Ҫ��
	1����if ...else if ..ʵ��;
	2���� switch ʵ�֣�
	3�����ַ������飨C����C++���ʵ�֡�
*/

int main()
{
	int a = 0;
	cin>>a;
//	1����if ...else if ..ʵ��
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
//		cout<<"�������"<<endl; 
//	}

//2���� switch ʵ��
//switch(a)
//{
//	case 1: cout<<"Monday"<<endl;break;
//	case 2: cout<<"Tuesday"<<endl;break;
//	case 3: cout<<"Wednesday"<<endl;break;
//	case 4: cout<<"Thursday"<<endl;break;
//	case 5: cout<<"Friday"<<endl;break;
//	case 6: cout<<"Saturday"<<endl;break;
//	case 7: cout<<"Sunday"<<endl;break;
//	default: cout<<"�������"<<endl;break;
//}

//3�����ַ������飨C����C++���ʵ�֡�
char arr1 [10][10] = {"0","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
cout<<arr1[a]<<endl;
	
	return 0;
}


