#include<iostream>
using namespace std;
//�ж����� 
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
		cout<<"����"<<endl;
	}
	else{
		cout<<"��������"<<endl;
	}
	return 0; 
} 
