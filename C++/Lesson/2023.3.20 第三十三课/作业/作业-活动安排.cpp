#include<bits/stdc++.h>
using namespace std;
//作业-活动安排 
const int N = 1e5+10;
struct activity{
	int start;
	int end;
}hd[N];
bool cmp(activity a,activity b){
	return a.end<b.end;
}
int main(){
	int n;
	cin>>n;
	if(n==0){
		cout<<0;
		return 0;
	}
	for(int i = 1;i<=n;i++)
		cin>>hd[i].start>>hd[i].end;
	sort(hd+1,hd+1+n,cmp);
	int now = 1,res = 1;
	for(int i = now+1;i<=n;i++){
		if(hd[now].end<=hd[i].start){
			now = i;
			res++;
		}
	}
	cout<<res;
	return 0; 
} 
