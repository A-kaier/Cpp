#include<iostream>
#include<vector> 
using namespace std;

 /*��Ŀ 1: �򵥵�Ԫ����Ӻ��Ƴ�
��������дһ�δ��룬����һ��std::vector<int>��Ȼ��ִ�����²�����
�����������5��������1, 2, 3, 4, 5����
��ӡ�������е�����Ԫ�ء�
������β��ɾ������Ԫ�ء�
�ٴδ�ӡ�������е�����Ԫ�ء�
��ʾ��ʹ��.push_back()���Ԫ�أ�ʹ��.pop_back()ɾ��β��Ԫ�أ���ͨ��ѭ�����±���ʴ�ӡԪ�ء�*/

void main01()
{
	vector<int> arr;
	
	// ʹ��.push_back()���5��������1, 2, 3, 4, 5��
	for(int i = 1;i <= 5;i++)
	{
		arr.push_back(i); 
	}
	// ��ӡ�������е�����Ԫ�ء�
	for(int i = 0;i < arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// ������β��ɾ������Ԫ�ء�
	if(arr.size() >= 2) 
	{
		arr.pop_back();
		arr.pop_back();
	}
	// �ٴδ�ӡ�������е�����Ԫ�ء�
	for(int i = 0;i < arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
}

 /*��Ŀ 2: ʹ��ָ����С�ͳ�ʼֵ��������
����������һ������10��Ԫ�ص�std::vector<int>��ÿ��Ԫ�صĳ�ʼֵΪ10��Ȼ���������ӡÿ��Ԫ�ء�
��ʾ���ڹ��캯����ָ����С�ͳ�ʼֵ��*/
void main02()
{
	vector<int> arr(10,10);
	for(int i = 0;i < arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
}



int main()
{
//	main01();
//	main02();
	
	system("pause");
	return 0;
}



























