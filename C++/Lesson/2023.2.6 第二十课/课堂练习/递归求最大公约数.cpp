#include<bits/stdc++.h>
using namespace std;
//递归求最大公约数 
int Eucild(int a,int b){
	int m = a%b;
	if(m==0)
		return b;
	return Eucild(b,m);
}
int gcd(int a,int b,int n){
	if(a%n==0&&b%n==0)
		return n;
	return gcd(a,b,n-1);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<Eucild(a,b)<<endl;
	cout<<gcd(a,b,min(a,b))<<endl;
	return 0; 
} 
