#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int min(int n){
	if(n==1)
		return a[1];
	int b = min(n-1);
	return a[n]<b?a[n]:b;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	cout<<min(n)<<endl;
	return 0; 
} 
