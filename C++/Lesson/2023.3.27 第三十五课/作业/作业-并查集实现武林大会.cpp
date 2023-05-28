#include<bits/stdc++.h>
using namespace std;
//作业-并查集实现武林大会 
const int  N = 1e5;
int pre[N];
//找x的根节点 
int find(int x){
	if(pre[x]==x)
		return x;
	return find(pre[x]);
}
//合并x和y所在的集合
void join(int x,int y){
	int fx = find(x),fy = find(y);
	if(fx!=fy)
		pre[fx]=fy;
} 
int main(){
	int  n;
	cin>>n;
	//初始化
	for(int i = 1;i<=n;i++){
		pre[i] = i;
	} 
	for(int i = 1;i<=n;i++){
		cout<<find(i);
	} 
	for(int i = 1;i<=n-1;i++){
		join(i,i+1);
	} 
	for(int i = 1;i<=n;i++){
		cout<<find(i);
	} 
	return 0; 
} 
