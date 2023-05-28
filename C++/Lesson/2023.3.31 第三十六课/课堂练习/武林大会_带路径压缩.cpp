#include<bits/stdc++.h>
using namespace std;
//武林大会_带路径压缩 
const int  N = 1e5;
int pre[N];
//找x的根节点 
int find(int x){
	if(pre[x]==x)
		return x;
	return pre[x] = find(pre[x]);
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
	cout<<"根节点"<<endl;
	for(int i = 1;i<=n;i++){
		cout<<find(i)<<endl;
	} 
	cout<<"上一个节点"<<endl; 
	for(int i = 1;i<=n;i++){
		cout<<pre[i]<<endl;
	} 
	for(int i = 1;i<=n-1;i++){
		join(i,i+1);
	} 
	
	cout<<"根节点"<<endl;
	for(int i = 1;i<=n;i++){
		cout<<find(i)<<endl;
	} 
	cout<<"上一个节点"<<endl; 
	for(int i = 1;i<=n;i++){
		cout<<pre[i]<<endl;
	}  
	return 0; 
} 
