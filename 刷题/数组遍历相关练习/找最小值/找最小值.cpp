#include <iostream>
using namespace std;

// ����һ������n�����������У�Ҫ���дһ�������ҳ���Щ���е���Сֵ��

//�����ʽ��
//��һ�� 1 ������n;
//�ڶ��� n ��������1000����������
//�����ʽ��

//һ��һ����������ʾ�����n������������Сֵ��

int main()
{
	int n;
	cin>>n;
	
	int min_nums;
	cin>>min_nums;
	for(int i = 1;i < n;i++)
	{
		int num;
		cin>>num;
		
		if(num < min_nums)
		{
			min_nums = num;
		}
	}
	cout<<min_nums<<endl;
	
	return 0;
} 




