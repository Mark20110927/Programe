#include<iostream>
using namespace std;
int main(){
	cout<<"���������ĳɼ���"<<endl;
	int a;
	cin>>a;
	if(a>90&&a<=100) {
		cout<<"A"<<endl;
	}
	else if(a>80){
		cout<<"B"<<endl;
	}
	else if(a>70){
		cout<<"C"<<endl;
	}
	else if(a>60){
		cout<<"D"<<endl;
	}
	else{
		cout<<"F"<<endl;
	}
	return 0; 
} 
