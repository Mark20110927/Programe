#include<bits/stdc++.h>
using namespace std;
//sort°´¸öÎ»ÅÅÐò 
const int N = 1e5;
int a[N];
bool cmp(int a,int b){
	if(a%10>b%10)
		return true;
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i = 1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	return 0; 
} 
