#include<bits/stdc++.h>
using namespace std;
//ÊıÎ»ÅÅĞò
const int N = 1e6+10;
struct number{
	int sum;
	int value;
}a[N];
bool cmp(number a,number b){
	if(a.sum==b.sum){
		if(a.value<b.value)
			return true;
		else
			return false;
	}
	else{
		if(a.sum<b.sum)
			return true;
		else
			return false;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		a[i].value = i;
		int tmp = i;
		while(tmp){
			a[i].sum+=tmp%10;
			tmp/=10;
		}
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[m].value;
	return 0; 
} 
