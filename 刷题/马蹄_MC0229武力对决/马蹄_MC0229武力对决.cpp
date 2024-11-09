#include<bits/stdc++.h> 
using namespace std;
A

int main( )
{
	
    int a;
    cin>>a;
    int temp;
    int maxa,minb;
	while(a--)
	{
		cin>>temp;
		maxa = max(maxa,temp);
		minb = min(minb,temp);
	}
	cout<<maxa - minb;

    return 0;
}
