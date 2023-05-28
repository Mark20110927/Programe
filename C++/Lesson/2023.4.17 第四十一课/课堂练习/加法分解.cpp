#include<bits/stdc++.h>
using namespace std;
//加法分解 
const int N = 100;
int path[N];
void dfs(int step,int x){//将要走第几步 剩余的待分解的数 
	//边界 出口 每走一个数字就出一个结果
	if(step!=1) {
		for(int i = 1;i<=step-1;i++)
			cout<<path[i]<<" + ";
		cout<<x<<endl;
	}
	//遍历所有可能 保证后面不小于前面 这一步小于等于剩下的一半
	for(int i = path[step-1];i<=x/2;i++){
		//记住路径
		path[step] = i;
		//递归 
		dfs(step+1,x-i);
	} 
}
int main(){
	int n;
	cin>>n;
	path[0] = 1;
	dfs(1,n);
	return 0; 
} 
