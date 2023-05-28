#include<iostream>
using namespace std;
//归并排序 求逆序对 
const int N = 1000;
int a[N],tmp[N];
long long merge_sort(int l,int r){
	//出口 
	if(l>=r)
		return 0;
	//选分界点
	int mid;
	mid = l+r>>1;
	//递归排左右两边 
	long long sum = merge_sort(l,mid)+merge_sort(mid+1,r);
	//归并 
	int  i = l,j = mid+1,k = 0;
	//左右都剩 
	while(i<=mid&&j<=r){
		if(a[i]<a[j])
			tmp[k++] = a[i++];
		else{
			tmp[k++] = a[j++];
			sum+=mid-i+1;
		} 
	}
	while(i<=mid) tmp[k++] = a[i++];
	while(j<=r) tmp[k++] = a[j++];
	//复制回原数组 
	for(i = l,j = 0;i<=r,j<=k-1;i++,j++)
		a[i] = tmp[j];
	return sum;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	cout<<merge_sort(1,n);
	return 0; 
}

