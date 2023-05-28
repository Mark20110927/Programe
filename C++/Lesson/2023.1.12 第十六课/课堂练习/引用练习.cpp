#include<bits/stdc++.h>
using namespace std;
//引用练习 
int main(){
	int a = 1;
	int & b = a;
	cout<<"a的值："<<a<<endl; 
	cout<<"b的值："<<b<<endl; 
	cout<<"a的地址："<<&a<<endl; 
	cout<<"b的地址："<<&b<<endl; 
	b++;
	cout<<"a的值："<<a<<endl; 
	cout<<"b的值："<<b<<endl;
	int & c = a;
	int & d = b;
	cout<<"a的值："<<a<<endl; 
	cout<<"b的值："<<b<<endl; 
	cout<<"c的值："<<c<<endl; 
	cout<<"d的值："<<d<<endl; 
	return 0; 
} 
