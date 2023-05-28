#include<bits/stdc++.h>
using namespace std;
//递归n个数中的最大值 
const int N = 1e5;
int a[N]; 
int maxf(int n){
	if(n==1)
		return a[1];
	int b = maxf(n-1);
	return b>a[n]?b:a[n];
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		
	}
	cout<<maxf(n)<<endl; 
	return 0; 
} 
