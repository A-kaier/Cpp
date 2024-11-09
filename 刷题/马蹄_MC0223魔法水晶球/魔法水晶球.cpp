#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 0;
	cin>>n;
    for(int i = 2;i < n;i++)
    {
        if(n % i == 0)
        {
            if(n % 2 == 0)
            {
                cout<<"E"<<endl;
                break;
            }
            else
            {
                cout<<"O"<<endl;
                break;
            }
        }
        if (i == n - 1) cout<<"P"<<endl;
    }
	return 0;
}


