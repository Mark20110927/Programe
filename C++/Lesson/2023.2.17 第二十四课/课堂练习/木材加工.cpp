#include<bits/stdc++.h>
using namespace std;
//木材加工 
const int N = 1e5+10;
int q[N];
bool check(int mid,int n,int k){
	long long int duanshu = 0;
	for(int i = 1;i<=n;i++){
		duanshu += q[i]/mid;
	}
	if(duanshu>=k)
		return true;
	else
		return false;
}
int main(){
	int n,k,maxl = 0;
	long long int suml = 0;
	cin>>n>>k;
	//找出总长和最长 
	for(int i = 1;i<=n;i++){
		cin>>q[i];
		if(maxl<q[i])
			maxl = q[i]; 
			suml += q[i];
	}
	//判断为零的情况
	if(suml<k){
		cout<<0<<endl;
		return 0;
	} 
	//一定有解
	int l = 1,r = maxl,mid;
	while(l<r){
		mid = l+r+1>>1;
		if(check(mid,n,k)) l = mid;
		else r = mid-1;
	}
	cout<<r<<endl;
	return 0; 
} 
