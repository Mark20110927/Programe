#include<iostream>
using namespace std;
// �ǹȲ��� 
int main(){
	int n;
	cin>>n;
	while(n!=1){
		if(n%2==1){
			//����
			cout<<n<<"*3+1=";
			n=n*3+1;
			cout<<n<<endl; 
		}
		else{
			//ż��
			cout<<n<<"/2=";
			n=n/2;
			cout<<n<<endl; 
		}
	} 
	cout<<"End"<<endl;
	return 0; 
} 
