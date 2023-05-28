#include<bits/stdc++.h>
using namespace std;
//×÷Òµ-·É»ú½µÂä
const int N = 20;
struct plane{
	int t;
	int d;
	int l;
};
plane p[N];
int n;
bool flag[N];
bool dfs(int step,int last){
	if(step==n+1)
		return true;
	for(int i = 1;i<=n;i++){
		if(!flag[i]&&p[i].t+p[i].d>=last){
			flag[i] = true;
			if(dfs(step+1,max(p[i].t,last)+p[i].l))
				return true;
			flag[i] = false;
		} 
	}
	return false;
} 

int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		memset(flag,0,sizeof flag);
		for(int i = 1;i<=n;i++)
			cin>>p[i].t>>p[i].d>>p[i].l;
		if(dfs(1,0))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0; 
} 
