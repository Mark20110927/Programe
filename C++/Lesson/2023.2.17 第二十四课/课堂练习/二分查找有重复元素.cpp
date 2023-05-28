#include<bits/stdc++.h>
using namespace std;
//二分查找有重复元素 
const int N = 1e6+10;
int a[N]; 
int main(){
	int n,m;
	cin>>n>>m;
	//输入n个数
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	//进行m次询问
	int x,l,r,mid;	
	while(m--){
		cin>>x;
		//套用左模板
		l = 1,r = n;
		while(l<r){
			mid = l+r>>1;
			if(a[mid]>=x) r = mid;
			else l = mid+1;
		}
		//最后答案是l==r==mid
		if(a[l]==x)
			cout<<l<<' ';
		else 
			cout<<"-1"<<' '; 
	} 
	return 0; 
}
