#include<bits/stdc++.h>
using namespace std;
//排队打水
const int N = 1e5+10;
int tx[N];
long long lt[N];
long long sum;
int main(){
	int n,r;
	cin>>n>>r;
	for(int i = 1;i<=n;i++)
		cin>>tx[i];
	//贪心第一步，让时间少的人先打 
	sort(tx+1,tx+1+n);
	//贪心第二步，找最短的水龙头
	for(int i = 1;i<=n;i++){
		int minf = 1;
		for(int j = 1;j<=r;j++){
			if(lt[j]<lt[minf])
				minf = j;
		}
		sum+=lt[minf];
		lt[minf]+=tx[i];
	} 
	cout<<1.0*sum/n;
	return 0; 
} 
