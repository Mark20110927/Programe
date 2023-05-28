#include<bits/stdc++.h>
using namespace std;
//快速排序 -中间 
const int N  = 1e5+10;
int a[N];
void quick_sort(int l,int r){
	//出口
	if(l>=r)
		return; 
	//分界
	int mid = a[l+r>>1];
	//调整 左边<=分界 左边找>=分界  右边>=分界 找<=分界
	int i = l-1,j = r+1;
	while(i<j){
		while(a[++i]<mid);
		while(a[--j]>mid);
		if(i<j)
			swap(a[i],a[j]);
	}
	//递归左右两边 停下来的时候：i==j/j+1==i 
	quick_sort(l,j);
	quick_sort(j+1,r);
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	quick_sort(1,n);
	for(int i = 1;i<=n;i++)
		cout<<a[i]<<' ';
	return 0; 
} 
