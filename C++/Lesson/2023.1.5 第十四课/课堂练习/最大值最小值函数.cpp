#include<bits/stdc++.h>
using namespace std;
//最大值最小值函数 
int maxf(int x,int y){
	if(x>y)
		return x;
	else
		return y;
} 
int minf(int x,int y){
	return x>y?y:x;
} 
int main(){
	int x,y;
	cin>>x>>y;
	cout<<x<<"和"<<y<<"的最大值是"<<maxf(x,y)<<endl; 
	cout<<x<<"和"<<y<<"的最小值是"<<minf(x,y)<<endl; 
	return 0; 
} 
