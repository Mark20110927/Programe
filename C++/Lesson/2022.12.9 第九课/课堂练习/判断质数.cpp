#include<iostream>
using namespace std;
//判断质数 
int main(){
	int n;
	cin>>n;
	bool flag = true;
	for(int i = 2;i<=n-1;i++) {
		if(n%i==0){
			flag=false;
			break;
		}
		
	}
	if(flag){
		cout<<"质数"<<endl;
	}
	else{
		cout<<"不是质数"<<endl;
	}
	return 0; 
} 
