#include<bits/stdc++.h>
using namespace std;
//递归求x的n次方 
int powf(int x,int n){
	//出口
	if(n==1){
		return x;
	} 
	//相信
	return x*powf(x,n-1);
}
int main(){
	int n,x;
	cin>>x>>n;
	cout<<powf(x,n)<<endl; 
	return 0; 
} 
