#include<bits/stdc++.h>
using namespace std;
//作业-刷题统计
long long a,b,n,res,week; 
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
		n-=a*5;
		res = week*7+n/b+5+flag;
	}
	cout<<res;
	return 0; 
} 
