#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a = "";
	char b = 0;
	cin>>a;
	cin>>b;
	int len = a.size();
	for(int i = 0;i < len;i++)
	{
		if(a[i]==b)
		{
			cout<< i + 1;
			return 0;
		}
	}
	
	cout<<"-1"; 
	return 0;
}




