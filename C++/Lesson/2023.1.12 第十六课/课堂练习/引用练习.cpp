#include<bits/stdc++.h>
using namespace std;
//������ϰ 
int main(){
	int a = 1;
	int & b = a;
	cout<<"a��ֵ��"<<a<<endl; 
	cout<<"b��ֵ��"<<b<<endl; 
	cout<<"a�ĵ�ַ��"<<&a<<endl; 
	cout<<"b�ĵ�ַ��"<<&b<<endl; 
	b++;
	cout<<"a��ֵ��"<<a<<endl; 
	cout<<"b��ֵ��"<<b<<endl;
	int & c = a;
	int & d = b;
	cout<<"a��ֵ��"<<a<<endl; 
	cout<<"b��ֵ��"<<b<<endl; 
	cout<<"c��ֵ��"<<c<<endl; 
	cout<<"d��ֵ��"<<d<<endl; 
	return 0; 
} 
