#include<iostream>
using namespace std;
//ŷ����÷���������� 
int main(){
	int m,n;
	cin>>m>>n;
	if(m<n){
		int temp = m;
		m = n;
		n = temp;
	} 
	int r = m%n;
	int m0,n0;
	m0 = m;
	n0= n; 
	//gcd(m,n)=gcd(n,r)շת��� 
	while(r!=0){
		m = n;
		n = r;
		r = m%n;
	} 
	cout<<r;
	return 0; 
} 
