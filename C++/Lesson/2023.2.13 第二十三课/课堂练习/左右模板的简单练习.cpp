#include<bits/stdc++.h>
using namespace std;
//×óÓÒÄ£°åµÄ¼òµ¥Á·Ï° 
int a[9] = {1,3,3,3,3,3,5,5,6} ;
int main(){
	int n;
	cin>>n;
	//×ó
	int l = 0,r = 8,mid;
	while(l<r){
		mid = l+r>>1;
		if(a[mid]>=n)
			r = mid;
		else
			l = mid+1;
	} 
	//ÓÒ 
//	while(l<r){
//		mid = l+r+1>>1;
//		if(a[mid]<=n)
//			l = mid;
//		else
//			r = mid-1;
//	}
	if(a[l]==n)
		cout<<l<<endl;
	else
		cout<<"No Found!"<<endl;
	 
	return 0; 
} 
