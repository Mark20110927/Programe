#include<bits/stdc++.h>
using namespace std;
//A-B=C���� 
const int N = 2e5+10;
int a[N],sum; 
int main(){
	int n,c;
	cin>>n>>c;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	//ǰ��n-1���������������B
	for(int i = 1;i<=n-1;i++){
		//��ģ��������ߵ�
		int l = i+1,r = n,mid,start;
		while(l<r){
			mid = l+r>>1;
			if(a[mid]-a[i]>=c) r = mid;
			else l = mid+1;
		} 
		if(a[l]-a[i]==c) start = l;
		else continue;
		//��ģ�������ұߵ�
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
