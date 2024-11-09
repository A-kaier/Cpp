#include<iostream> 

using namespace std;

int main( ){
    int n = 0;
    string s;
    cin>>n>>s;
    for(int i = 0;i<s.length();i += n)
        cout<<s[i];
    return 0;
}
