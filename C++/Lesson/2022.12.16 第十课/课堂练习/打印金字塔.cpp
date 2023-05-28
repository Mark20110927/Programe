#include<iostream>
using namespace std;
//´òÓ¡½ð×ÖËþ 
int main(){
	int n;
	cin>>n;
	int i;
	for(i = 1;i<=n;i++){
		for(int j = 1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j = 1;j<=2*i-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0; 
} 
