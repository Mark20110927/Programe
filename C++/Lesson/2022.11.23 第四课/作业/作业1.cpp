#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"请输入一个大写字母"<<endl; 
	cin>>a;
	cout<<"这个字母的小写字母以及相邻的两个字母是：" ; 
	cout<<char(a +31)<<char(a + 32)<<char(a + 33)<<endl;
	return 0; 
} 
