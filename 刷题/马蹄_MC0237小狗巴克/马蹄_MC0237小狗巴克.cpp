#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b,c;
	cin>>a>>b;
	for(int i = 0;i < a.length();i++)
		if(a[i] != '!')
			c += a[i];
	if(c.find(b) == string::npos)
		cout<<"False";
	else
		cout<<"True";
	return 0;
}


