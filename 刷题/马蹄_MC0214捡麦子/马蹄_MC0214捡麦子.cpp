#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin>>a;
	for(int i = 1; i <= a;i++)
	{
		b += i * (i + 1) / 2;
	}
	cout<<b<<endl;
	return 0;
}

