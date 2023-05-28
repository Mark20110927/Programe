#include<bits/stdc++.h>
using namespace std;
//二分查找 递归写法 
const int N = 1e6+10;
int a[N];
int b_s_d(int n,int l,int r){
	if(l>r)
		return -1;
	int mid = (l+r)/2;
	if(a[mid]==n)
		return mid;
	if(a[mid]>n)
		return b_s_d(n,l,mid-1);
	else
		return b_s_d(n,mid+1,r);
} 
int main(){
	int n;
	cin>>n;
	for(int i = 0;i<=N-1;i++){
		a[i] = i*2;
	}
	int res = b_s_d(n,0,N-1);
	if(res==-1)
		cout<<"No Found!"<<endl;
	else
		cout<<"It Was In "<<res<<endl;
	return 0; 
} 
