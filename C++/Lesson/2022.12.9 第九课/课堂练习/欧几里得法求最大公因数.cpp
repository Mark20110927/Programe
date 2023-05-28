#include<iostream>
using namespace std;
//欧几里得法求最大公因数 
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
	//gcd(m,n)=gcd(n,r)辗转相除 
	while(r!=0){
		m = n;
		n = r;
		r = m%n;
	} 
	cout<<r;
	return 0; 
} 
