#include<iostream>
using namespace std;
// ½Ç¹È²ÂÏë 
int main(){
	int n;
	cin>>n;
	while(n!=1){
		if(n%2==1){
			//ÆæÊı
			cout<<n<<"*3+1=";
			n=n*3+1;
			cout<<n<<endl; 
		}
		else{
			//Å¼Êı
			cout<<n<<"/2=";
			n=n/2;
			cout<<n<<endl; 
		}
	} 
	cout<<"End"<<endl;
	return 0; 
} 
