#include<bits/stdc++.h>
using namespace std;
//任务安排 
const int N = 100;
int sy[N][N];//收益数组 
int n;//人数任务数 
long long sumsy;//总收益
long long maxsy;//最后的最大收益 
int path[N],final_path[N];//路径数组,最终路径 
bool flag[N];//标记数组 
void dfs(int step){//将要走的步数 
	if(step==n+1){
		//更新 
		if(sumsy>maxsy){
			maxsy = sumsy;
		for(int i = 1;i<=n;i++)
			final_path[i] = path[i];
		}
		//回去 
		return;
	}
	//遍历所有可能
	for(int i = 1;i<=n;i++){
		if(!flag[i]){
			//标记
			flag[i] = true;
			path[step] = i;
			sumsy+=sy[step][i];
			//递归
			dfs(step+1);
			//恢复现场
			flag[i] = false; 
			sumsy-=sy[step][i];
		}
	} 
}
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		for(int j = 1;j<=n;j++)
			cin>>sy[i][j];
	dfs(1);
	cout<<"最大收益方案是："<<endl;
	for(int i = 1;i<=n;i++){
		cout<<char(64+i)<<":Task "<<final_path[i]<<endl;
	}
	cout<<"最大收益："<<maxsy; 
	return 0; 
} 
