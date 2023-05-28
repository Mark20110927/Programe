#include<bits/stdc++.h>
using namespace std;
//二分查找(不含重复元素) 
const int N = 1e32;
int a[N];
int main(){
	for(int i = 0;i<N;i++)
		a[i] = 2*i;
	int n;
	cin>>n;
	//确定范围
	int l = 0,r = N-1,mid;
	while(l!=r){
		mid = (l+r)/2;
		if(a[mid]==n) cout<<mid<<endl;
		else if(a[mid]>n) r = mid-1;
		else l = mid+1;
	} 
	if(a[l]==n)
		cout<<l<<endl;
	else
		cout<<-1<<endl; 
	for(int i = 0;i<N;i++)
		cout<<a[i]<<' ';
	return 0;
}
