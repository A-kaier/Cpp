#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,num = 0;
	cin>>a>>b;
	for(int i = a;i <= b;i++)
		if(i % 8) // ȡ���� ,�������ʽ 
			num += (1 + i) * i / 2;
	cout<<num;


	return 0;
}


