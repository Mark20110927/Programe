#include<bits/stdc++.h>
using namespace std;
//二分查找 函数写法
const int N = 1e6+10;
int a[N];
int binary_search(int n){
	int l = 0,r = N-1,mid;
	while(l<=r){
		mid = (l+r)/2;
		if(a[mid]==n)
			return mid;
		else if(a[mid]>n)
			r = mid-1;
		else
			l = mid+1; 
	}
	return -1;
}
int main(){
	
	int n;
	cin>>n;
	for(int i = 0;i<=N-1;i++){
		a[i] = i*2;
	}
	int res = binary_search(n);
	if(res==-1)
		cout<<"No Found!"<<endl;
	else
		cout<<"It Was In "<<res<<endl;
	
	return 0; 
} 
