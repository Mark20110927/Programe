#include<bits/stdc++.h>
using namespace std;
//ÇóºÍ
typedef long long ll;
const int N = 2e5+10;
int a[N];
ll sum,res;
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	for(int i = 1;i<=n;i++){
		res+=a[i]*(sum-a[i]);
	}
	cout<<res/2;
	return 0; 
} 
