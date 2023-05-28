#include<bits/stdc++.h>
using namespace std;
//n皇后问题
const int N = 20;
char mapf[N][N];//棋盘 
int n;//棋盘大小 皇后个数 
bool flaglie[N],flagdj[N],flagfdj[N];
void dfs(int hang){//代表将要在第几行填入皇后 
	//出口 
	if(hang==n){
		for(int i = 0;i<n;i++)
			cout<<mapf[i]<<endl;
		cout<<endl;
	} 
	//遍历所有可能 
	for(int lie = 0;lie<n;lie++){
		//判断是否满足条件 同一列 同一对角线 反对角线
		if(flaglie[lie]==0&&flagdj[lie-hang+n]==0&&flagfdj[lie+hang]==0){
			//标记
			flaglie[lie] = flagdj[lie-hang+n] = flagfdj[lie+hang] = 1;
			mapf[hang][lie] = 'Q';
			//递归
			dfs(hang+1);
			//恢复现场
			flaglie[lie] = flagdj[lie-hang+n] = flagfdj[lie+hang] = 0;
			mapf[hang][lie] = '.';
		} 
	}
} 
int main(){
	cin>>n;
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++)
			mapf[i][j] = '.';
	dfs(0);
	return 0; 
} 
