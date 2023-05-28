#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int a[N]; 
int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
		cin>>a[i];                                                                                                                                                                            
	int x,l,r,mid;	
	while(m--){
		cin>>x;
		l = 1,r = n;
		while(l<r){
			mid = l+r+1>>1;
			if(a[mid]<=x) l = mid;
			else r = mid-1;
		}
		if(a[l]==x)
			cout<<l<<' ';
		else 
			cout<<"-1"<<' '; 
		x = 0;
	} 
	return 0; 
}
