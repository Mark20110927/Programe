#include<bits/stdc++.h>
using namespace std;
//Ë¢ÌâÍ³¼Æ
long long a,b,n,week,res;
int main(){
	cin>>a>>b>>n;
	week = n/(a*5+b*2);
	n%=a*5+b*2;
	if(n<=a*5){
		bool flag = n%a;
		res = week*7+n/a+flag;
	}
	else{
		bool flag = n%b;
		n-=5*a;
		res = week*7+5+n/b+flag;
		
	}
	cout<<res;
	return 0; 
} 
