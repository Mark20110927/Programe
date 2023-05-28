#include<bits/stdc++.h>
using namespace std;
//素数环
const int N = 50;
int path[N];//路径 
bool flag[N]; //标记
int n;//输入 
bool res;//答案
bool prime(int x,int y){
	int s = x+y;
	if(s<=1)
		return false;
	for(int i = 2;i*i<=s;i++){
		if(s%i==0)
			return false;
	}
	return true;                              
} 
void dfs(int step){//将要走的第几步 
	//边界 出口
	if(step==n&&prime(path[0],path[n-1])){
		res = true;
		for(int i = 0;i<n;i++)
			cout<<path[i]<<' ';
		cout<<endl;
		return;
	} 
	//遍历所有可能 有条件满足素数环的定义
	for(int i = 2;i<=n;i++){//没有用过 并且和上一个的和为素数 
		if(!flag[i]&&prime(path[step-1],i)){
			path[step] = i;//把i加入路径
			flag[i] = true;//标记i已被用过
			dfs(step+1);//递归调用 
			flag[i] = false;//恢复现场 可写可不写 
			path[step] = 0;//恢复现场 
		}
	} 
} 
int main(){
	cin>>n;
	if(n%2==1){
		cout<<"NO ANSWER!";
		return 0;
	}
	path[0] = 1;
	dfs(1);
	if(res==false)
		cout<<"NO ANSWER!";
	return 0; 
} 
