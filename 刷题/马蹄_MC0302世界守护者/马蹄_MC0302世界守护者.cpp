#include <iostream>
using namespace std;

// ц╟ещеепР 
int main(){
	int arr[1001];
	for(int i = 0;i < 3;i++){
		cin>>arr[i];
	}
	for(int i = 0;i < 3 - 1;i++){
		for(int j = 0;j < 3 - i - 1;j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}
	for(int i = 0;i < 3;i++){
		cout<<arr[i]<<" ";
}
	return 0;
} 

