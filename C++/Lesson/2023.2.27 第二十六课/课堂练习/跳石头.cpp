#include<bits/stdc++.h>
using namespace std;
//ÌøÊ¯Í· 
const int N = 1e6+10;
int stone[N],L,n,m;
bool check(int mid){
	int now = 0,next = 1,take = 0;
	while(now<=n){
		if(stone[next]-stone[now]<mid)
			take++;
		else
			now = next;
		next++;
	}
	return take<=m;
} 
int main(){
	cin>>L>>n>>m;
	stone[n+1] = L;
	if(n==0){
		cout<<L<<endl;
		return 0;
	}
	for(int i = 1;i<=n;i++)
		cin>>stone[i];
	int l = 1,r = L,mid;
	while(l<r){
		mid = l+r+1>>1;
		if(check(mid)) l = mid;
		else r = mid-1;
	}
	cout<<l<<endl;
	return 0; 
} 
