#include <iostream>
using namespace std;

//����������
//1������һ��whileѭ������1��100֮�����ֵ�ۼ�������
//2������һ��forѭ�������û�ÿ�δӼ����������ֵ�ۼ�����������ܺͳ�����5000��ѭ����
//����

int main()
{
	// forѭ��
	int i = 0;
	int tmp = 0;
	for(i = 0;i<= 5000;)
	{
		int tmp2 = 0;
		cout<<"������ֵ��";
		cin>>tmp2;
		i = i + tmp2;
	}
	cout<<"��ֵ�ѵ�5000��������ֹͣ"<<endl;
	cout<<"������ֵ�ǣ�"<<i<<endl; 
cout<<endl;
//	 whileѭ��
	int j = 1;
	while(j < 101)
	{
		tmp = tmp + j;
		j++;
	}
	cout<<"tmp = "<<tmp<<endl;
	
	return 0;
}
