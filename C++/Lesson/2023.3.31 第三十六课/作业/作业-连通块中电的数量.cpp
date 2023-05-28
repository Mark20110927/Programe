#include<bits/stdc++.h>
using namespace std;
//作业-连通块中电的数量 
const int N = 1e5;
int pre[N],sum[N];
int find(int x){
	if(pre[x]==x)
		return x;
	return pre[x] = find(pre[x]);
}
//并 考虑方向 可能有条件
void join(int a,int b){
	int fa = find(a),fb = find(b);
	if(fa!=fb){
		pre[fa] = fb;
	}
}
int main(){
	int n,m;
	string op;
	cin>>n>>m;
	//初始化
	for(int i = 1;i<=n;i++){
		pre[i] = i;
		sum[i] = 1; 
	}
	while(m--){
		cin>>op;
		int a,b;
		cin>>a;
		if(op=="C"){
			cin>>b;
			join(a,b);
			sum[b]+=sum[a];
		}
		if(op=="Q1"){
			cin>>b;
			int fa = find(a),fb = find(b);
			if(fa==fb)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		if(op=="Q2"){
			int fa = find(a); 
			cout<<sum[fa]<<endl;
		}
	}
	return 0; 
} 
