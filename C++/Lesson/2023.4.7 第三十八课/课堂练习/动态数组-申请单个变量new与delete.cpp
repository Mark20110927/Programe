#include<bits/stdc++.h>
using namespace std;
//���뵥������new��delete 
int main(){
	int *p = new int;
	cout<<"������ε�ֵ��"<<*p<<endl;
	cout<<"������εĵ�ַ��"<<p<<endl;
	delete p;
	p = new int(2);
	cout<<"������ε�ֵ��"<<*p<<endl;
	cout<<"������εĵ�ַ��"<<p<<endl;
	return 0; 
} 
