#include <iostream>
#include <iomanip> 
using namespace std;

//����һ������n�����������У���дһ�����򣬼��㲢�����Щ����ƽ��ֵ��������С�������λ����
//�����ʽ��
//��һ��-������n��
//�ڶ���n��������1000����������
//�����ʽ��
//һ��һ������������ʾ��Щ����ƽ��ֵ��������λС����

int main()
{
	int n = 0; // ����4 
	cin>>n; // ����10 20 30 40 
	double nums_a = 0;
	
	for(int i = 0;i < n;i++)
	{
		int nums;
		cin>>nums;
		
		nums_a += nums; 
		
	}
	// ����ƽ��ֵ
	 double pinjun =  nums_a / n;
	 cout<<fixed<<setprecision(2)<<pinjun<<endl; 

	
	return 0;
}

