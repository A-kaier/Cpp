#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin>>a;
	if(a % 10 != 0)
	{
		a *= 2;
		cout<<a<<endl;
	}
	else
	{
		a = 0;
		cout<<a;
	}
	

	return 0;
}


