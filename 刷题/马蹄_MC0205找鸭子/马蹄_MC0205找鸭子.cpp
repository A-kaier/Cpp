//#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

/*
int main()
{
	char arr[100001];// ��ʼ�� 
	
	cin>>arr; // ���� 
	
	// ����Ƿ�ﵽ���ַ����Ľ�������null character��
	for(int i = 0;i <= 100001 && arr[i]!= '\0';i++)  
	{
//		cout<<arr[i]; // ��ӡ������ַ� 
		
	}

	return 0;
}
*/

int main( )
{
    string s;
    cin>>s;
    char a = s[0];
    for(int i = 0;i < s.size();i++)
    {
        a = (a > s[i] ? a : s[i]);
    }
    cout<<a;

    return 0;
}

