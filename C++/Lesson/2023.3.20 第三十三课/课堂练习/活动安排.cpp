#include<bits/stdc++.h>
using namespace std;
//ªÓ∂Ø∞≤≈≈ 
const int N = 1e5+10;
struct HD{
	int s;
	int e;
}hd[N];
bool cmp(HD a,HD b){
	return a.e<b.e;
}
int main(){
	int n;
	cin>>n;
	if(n==0){
		cout<<0;
		return 0;
	}
	for(int i = 1;i<=n;i++)
		cin>>hd[i].s>>hd[i].e;
	sort(hd+1,hd+n+1,cmp);
	int now = 1,num = 1;
	for(int i = now+1;i<=n;i++){
		if(hd[now].e<=hd[i].e){
			now = i;
			num++;
		}
	}
	cout<<num;
	return 0; 
} 
