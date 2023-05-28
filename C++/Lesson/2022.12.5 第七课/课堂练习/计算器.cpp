#include<iostream>
using namespace std;
//计算器 
int main(){
	float n1,n2;
	char op;
	cout<<"输入两个操作数和运算符号！"<<endl;
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
				cout<<"除数不能为0"<<endl;
			}
			break;
		default:
			cout<<"没有这种运算"<<endl;
	}
	return 0; 
} 
