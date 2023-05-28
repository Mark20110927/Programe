#include<bits/stdc++.h>
using namespace std;
//申请单个变量new与delete 
int main(){
	int *p = new int;
	cout<<"这个整形的值是"<<*p<<endl;
	cout<<"这个整形的地址是"<<p<<endl;
	delete p;
	p = new int(2);
	cout<<"这个整形的值是"<<*p<<endl;
	cout<<"这个整形的地址是"<<p<<endl;
	return 0; 
} 
