#include<bits/stdc++.h> 
using namespace std;


int main()
{
	int a = 0,b = 0,c = 0;
	
	cin>>a;
	c = a;
	while(a)
	{
		
		b = b*10 + a%10;
	    a = a / 10;
	}
	a = c;
	cout<<b <<endl<< ( b>a ? "True":"False");
	
    return 0;
}
