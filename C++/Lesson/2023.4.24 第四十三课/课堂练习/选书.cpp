#include<bits/stdc++.h>
using namespace std;
//选书
const int N = 100;
bool like[N][N];//第几个人数否喜欢第几本书 
int n;//人数和书本数 
int path[N];//路径 
bool flag[N];//某一本书已分配
int ans;//答案总数 
void dfs(int step){
	//出口 边界
	if(step==n+1){
		ans++;
		cout<<"第"<<ans<<"种方案"<<endl; 
		for(int i = 1;i<=n;i++)
			cout<<"  第"<<i<<"位同学喜欢"<<char(64+path[i])<<endl; 
		cout<<endl;
		return;
	} 
	//遍历每一种可能
	for(int i = 1;i<=n;i++){
		if(!flag[i]&&like[step][i]){//剪枝 
			//标记
			flag[i] = 1;
			path[step] = i;
			//递归 
			dfs(step+1);
			//恢复现场 
			flag[i] = 0;
		}
	}
}
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		for(int j = 1;j<=n;j++)
			cin>>like[i][j];
	dfs(1);
	return 0; 
} 
