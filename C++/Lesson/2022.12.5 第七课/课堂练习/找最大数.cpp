#include<iostream>
using namespace std;
//4�����������  �����Ǽ��� ���·� 
int main(){
	int a,b,c,d,maxn;
	cin>>a>>b>>c>>d;
	maxn = a;//����a���
	
	if(maxn<b){
		maxn = b;
	}
	if(maxn<c){
		maxn = c;
	}
	if(maxn<d){
		maxn = d;
	} 
	cout<<"�����Ϊ��"<<maxn;
	return 0; 
} 
