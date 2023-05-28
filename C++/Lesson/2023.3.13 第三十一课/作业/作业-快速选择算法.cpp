#include<bits/stdc++.h>
using namespace std;
//作业-快速选择算法 
const int N  = 1e5+10;
int a[N];
int quick_select(int l,int r,int k){
	//出口
	if(l>=r)
		return a[l];
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
	//判断在左边还是在右边 左边有j-l+1个数 左边l,j 右边j+1,r
	if(j-l+1>=k)
		return quick_select(l,j,k);
	else
		return quick_select(j+1,r,k-(j-l+1)); 
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	cout<<quick_select(1,n,k);
	return 0; 
} 
