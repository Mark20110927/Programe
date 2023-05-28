#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"请输入一个大写字母"<<endl; 
	cin>>a;
	cout<<"这个字母的小写字母是：" ; 
	cout<<char(a + 32)<<endl;
	return 0; 
} 
