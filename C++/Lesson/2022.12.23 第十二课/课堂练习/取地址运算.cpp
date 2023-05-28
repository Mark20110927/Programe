#include<bits/stdc++.h>
using namespace std;
//取地址运算练习 
int main(){
	int a=1;
	cout<<"a的值是"<<a<<endl; 
	cout<<"a的地址是"<<&a<<endl;
	int b[10];
	for(int i = 0;i<=9;i++){
		cout<<&b[i]<<endl;
	}
	return 0; 
} 
