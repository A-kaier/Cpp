#include <iostream>
using namespace std;

/*
�ڽ��������볬Ů���ݺ󣬰�����Ҫ��ѡ�����ӡ���Ů���֡�
���ӣ�1������18-25�ꣻ2�����165-178cm��3����Ļ�����4����ֵƯ����С
��Ů��1������18-30�ꣻ2�����160-165cm��3����Ļ���������ͨ��4����ֵƯ��������
���֣�1������35-40�ꣻ2�����155-165cm��3�������ͨ���߷ɻ�����4����ֵһ�㡣
1) ��Ů�����ýṹ���ʾ��
2�������볬Ůȫ���������Ȼ��Ž���ѡ��
3�����߼����ʽ����ж���������Ҫ��Ƕ��if��䡣
*/

struct st_girl
{
	int age;
	int height;
	string sc;//.C++����ַ���
	bool yz;// true-Ư����false-һ�㡣
}stgirl;



int main()
{
	cout<<"���������䣺";cin>>stgirl.age;
	cout<<"��������ߣ�";cin>>stgirl.height;
	cout<<"��������ģ�";cin>>stgirl.sc;
	cout<<"��������ֵ��";cin>>stgirl.yz;
	
//	cout
//		<<"���䣺"<<stgirl.age
//		<<"����ߣ�"<<stgirl.height
//		<<"����ģ�"<<stgirl.sc
//		<<"����ֵ��"<<stgirl.yz
//		<<endl;
		
//	���ӣ�1������18-25�ꣻ2�����165-178cm��3����Ļ�����4����ֵƯ����
	if((stgirl.age>= 18) && ( stgirl.age <= 25) && (stgirl.height >= 165) && (stgirl.height <= 178) && (stgirl.sc == "����") && (stgirl.yz == true))
	{
		cout<<"������"<<endl;
	}
//	��Ů��1������18-30�ꣻ2�����160-165cm��3����Ļ���������ͨ��4����ֵƯ����
	if((stgirl.age>= 18) && ( stgirl.age <= 30) && (stgirl.height >= 160) && (stgirl.height <= 165) && ((stgirl.sc == "����") || (stgirl.sc == "��ͨ"))&& (stgirl.yz == true))
	{
		cout<<"�ǹ�Ů"<<endl;
	}
//	���֣�1������35-40�ꣻ2�����155-165cm��3�������ͨ���߷ɻ�����4����ֵһ�㡣
	if((stgirl.age>= 35) && ( stgirl.age <= 40) && (stgirl.height >= 155) && (stgirl.height <= 165) && ((stgirl.sc == "��ͨ") || (stgirl.sc == "�ɻ���"))&& (stgirl.yz == false))
	{
		cout<<"������"<<endl;
	}

	return 0;
}


