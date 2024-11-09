#include <iostream>
using namespace std;

int main()
{
	int a = 0,b = 0,c = 0;
	char douhao;
	cin>>a>>douhao>>b;
	for(int i = a;i <= b;i++)
	{
		if((i % 2 == 0) && (i % 3 == 0 ))
		{
			c += i;
		}
	}
	cout<<c<<endl;

	return 0;
}


