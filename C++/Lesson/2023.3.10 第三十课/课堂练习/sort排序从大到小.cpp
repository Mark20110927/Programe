#include<bits/stdc++.h>
using namespace std;
//sort排序从大到小 
const int N = 1e5;
int a[N];
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	for(int i = 1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	return 0; 
} 
