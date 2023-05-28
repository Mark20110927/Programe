#include<bits/stdc++.h>
using namespace std;
//作业-数位排序
const int N = 1e6+10;
struct num{
	int sum;
	int value;
}a[N]; 
bool cmp(num a,num b){
	if(a.sum==b.sum){
		return a.value<b.value;
	}
	else{
		return a.sum<b.sum;
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
