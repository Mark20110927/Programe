#include<bits/stdc++.h>
using namespace std;
//连通块中电的数量 
const int N = 1e5;
int pre[N],sum[N];
int find(int x){
	if(pre[x]==x)
		return x;
	return pre[x] = find(pre[x]);
} 
//并 考虑方向 可能有条件
void join(int x,int y){
	int fx = find(x),fy = find(y);
	if(fx!=fy){
		pre[fx] = fy;
	}
} 
int main(){
	int n,m;
	cin>>n>>m;
	//初始化
	for(int i = 1;i<=n;i++){
		pre[i] = i;
		sum[i] = 1;
	}
	while(m--){
		string op;
		int a,b;
		cin>>op>>a;
		if(op=="C"){
			cin>>b;
			join(a,b);
			sum[b]+=sum[a];
			
		}
		if(op=="Q1"){
			cin>>b;
			int fa = find(a),fb = find(b);
			if(fa==fb)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl; 
		}
		if(op=="Q2"){
			int fa = find(a);
			cout<<sum[fa]<<endl; 
		}
	}
	return 0; 
} 
