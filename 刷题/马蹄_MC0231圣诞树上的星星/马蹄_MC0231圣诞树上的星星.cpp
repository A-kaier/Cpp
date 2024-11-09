#include <iostream>
using namespace std;

//int main(){
//
//	int N,num;
//	cin>>N;
//	for(int i = 1;i <= N;i++){
//		if(i % 3 == 0)
//			cout<<"|"<<endl;
//		else
//			cout << string(i, '*')<<endl;
//	}
//}
//

int main(){

	int N,num;
	cin>>N;
	for(int i = 1;i <= N;i++){
		if(i % 3 == 0)
			cout<<"|";
		else
			for(int j = 1;j <= i;j++)
                cout<<"*";
        cout<<endl;
	}
}


