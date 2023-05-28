#include<bits/stdc++.h>
using namespace std;
//作业-有条件的任务安排 
const int N = 100;
int sy[N][N],n; 
long long sumsy;
long maxsy;
int path[N],final_path[N];
bool flag[N];
bool can[N][N]; 
void dfs(int step){
	if(step==n+1){
		if(sumsy>maxsy)
			maxsy = sumsy;
		for(int i = 1;i<=n;i++)
			final_path[i] = path[i];
		return; 
	}
	for(int i = 1;i<=n;i++){
		if(!flag[i]&&can[step][i]){
			flag[i] = true;
			path[step] = i;
			sumsy+=sy[step][i];
			dfs(step+1);
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
	for(int i = 1;i<=n;i++)
		for(int j = 1;j<=n;j++)
			cin>>can[i][j];
	dfs(1);
	cout<<"最大的收益方案"<<endl;
	for(int i = 1;i<=n;i++)
		cout<<char(64+i)<<":Task"<<final_path[i]<<endl;
	cout<<"最大收益为："<<maxsy; 
	return 0; 
} 
