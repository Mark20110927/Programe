#include<iostream>
using namespace std;
//������ 
int main(){
	float n1,n2;
	char op;
	cout<<"����������������������ţ�"<<endl;
	cin>>n1>>n2>>op;
	switch(op){
		case '+':
			cout<<n1+n2<<endl;
			break;
		case '-':
			cout<<n1-n2<<endl;
		case '*':
			cout<<n1*n2<<endl;
		case '/':
			if(n2!=0){
				cout<<n1/n2<<endl;
			}
			else{
				cout<<"��������Ϊ0"<<endl;
			}
			break;
		default:
			cout<<"û����������"<<endl;
	}
	return 0; 
} 
