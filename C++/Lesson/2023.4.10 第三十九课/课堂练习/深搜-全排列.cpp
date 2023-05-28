#include<bits/stdc++.h>
using namespace std;
//深搜-全排列 
const int N = 8;
int path[N];//存储搜索的路径 
bool flag[N];//标记使用的数字 
int n; 
void dfs(int step){
	//边界
	if(step==n){
		for(int i = 0;i<n;i++){
			cout<<path[i]<<' ';
		}
		cout<<endl;
		return;
	} 
	//搜索着这一层的所有可能 
	for(int i = 1;i<=n;i++){
		if(!flag[i]){
			flag[i] = true;//标记
			path[step] = i;//记住路径
			dfs(step+1);//递归调用步数+1 
			flag[i] = false; //回溯 恢复现场 
		}
	}
}
int main(){
	cin>>n;
	dfs(0);
	return 0; 
} 
