#include<bits/stdc++.h>
using namespace std;
//A-B=C数对 
const int N = 2e5+10;
int a[N],sum; 
int main(){
	int n,c;
	cin>>n>>c;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	//前面n-1个数，大家轮流当B
	for(int i = 1;i<=n-1;i++){
		//左模板找最左边的
		int l = i+1,r = n,mid,start;
		while(l<r){
			mid = l+r>>1;
			if(a[mid]-a[i]>=c) r = mid;
			else l = mid+1;
		} 
		if(a[l]-a[i]==c) start = l;
		else continue;
		//右模板找最右边的
		l = start,r = n;
		while(l<r){
			mid = l+r+1>>1;
			if(a[mid]-a[i]<=c) l = mid;
			else r = mid-1;
		} 
		sum+=l-start+1;	
	} 
	cout<<sum<<endl;
	return 0; 
} 
