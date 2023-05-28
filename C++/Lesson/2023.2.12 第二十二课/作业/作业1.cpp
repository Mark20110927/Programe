#include<bits/stdc++.h>
using namespace std;
//二分查找(不含重复元素) 
const int N = 1e3;
int a[N],mid;
int l = 0,r = N-1,n;
int zhong;
void erfen(int *mid){
	if(l==r)
		return;
	if(a[*mid]==n) cout<<*mid<<endl;
	else if(a[*mid]>n) r = *mid-1;
	else l = *mid+1;		
	int x = (l+r)/2;
	erfen(&x);
} 
int main(){
	for(int i = 0;i<N;i++)
		a[i] = 2*i;
	cin>>n;
	//确定范围
	mid = (l+r)/2;
	erfen(&mid);
	if(a[l]==n)
		cout<<l<<endl;
	else
		cout<<-1<<endl; 
	for(int i = 0;i<N;i++)
		cout<<a[i]<<' ';
	return 0;
}
