#include<bits/stdc++.h>
using namespace std;
//Ö¸Õë»ù±¾Á·Ï° 
int main(){
	int a = 1,b = 3;
	int *p;
	p = &a;
	cout<<"a:"<<a<<endl;
	cout<<"*p:"<<*p<<endl;
	cout<<"p:"<<p<<endl;
	cout<<"&a:"<<&a<<endl;
	*p = 2;
	cout<<"a:"<<a<<endl;
	cout<<"*p:"<<*p<<endl;
	cout<<"p:"<<p<<endl;
	cout<<"&a:"<<&a<<endl;
	p = &b;
	cout<<"*p:"<<*p<<endl;
	cout<<"p:"<<p<<endl;
	return 0; 
} 
