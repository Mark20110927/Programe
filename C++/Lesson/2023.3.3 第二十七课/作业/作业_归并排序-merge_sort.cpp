#include<bits/stdc++.h>
using namespace std;
//作业_归并排序-merge_sort 
const int N = 1000;
int a[N],tmp[N];
void merge_sort(int l,int r){
	//出口 
	if(l>=r)
		return;
	//选分界点
	int mid = l+r>>1;
	//递归排左右两边 
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	//归并 
	int i = l,j = mid+1,k = 0; 
	//左右都剩 
	while(i<=mid&&j<=r){
		if(a[i]<a[j])
			tmp[k++] = a[i++];
		else
			tmp[k++] = a[j++];
	}
	//扫尾 
	while(i<=mid)
		tmp[k++] = a[i++];
	while(j<=r)
		tmp[k++] = a[j++];
	//复制回原数组 
	for(i = l,j = 0;i<=r,j<=k-1;i++,j++)
		a[i] = tmp[j];
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	merge_sort(1,n);
	for(int i = 1;i<=n;i++)
		cout<<a[i]<<' ';
	return 0; 
} 
