#include<bits/stdc++.h>
using namespace std;
//ȡ��ַ������ϰ 
int main(){
	int a=1;
	cout<<"a��ֵ��"<<a<<endl; 
	cout<<"a�ĵ�ַ��"<<&a<<endl;
	int b[10];
	for(int i = 0;i<=9;i++){
		cout<<&b[i]<<endl;
	}
	return 0; 
} 
