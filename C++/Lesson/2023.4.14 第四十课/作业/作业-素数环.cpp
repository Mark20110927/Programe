#include<bits/stdc++.h>
using namespace std;
//作业-素数环
const int N = 50; 
int path[N];//路径 
bool flag[N];//标记
int n;//输入 
bool res;//答案
bool prime(int a,int b){
	int s = a+b;
	if(s<=1)
		return false; 
	for(int i = 2;i*i<=s;i++){
		if(s%i==0)
			return false;
	}
	return true;
}
void dfs(int step){//将要走的第几步 
	if(step==n&&prime(path[0],path[n-1])){
		res = true;
		for(int i = 0;i<n;i++){
			cout<<path[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i = 2;i<=n;i++){
		if(!flag[i]&&prime(path[step-1],i)){
			path[step] = i;
			flag[i] = true;
			dfs(step+1);
			flag[i] = false;
		}
	}
}

//边界 出口
//遍历所有可能 有条件满足素数环的定义
//没有用过 并且和上一个的和为素数 
//把i加入路径
//标记i已被用过
//递归调用 
//恢复现场
//恢复现场 可写可不写 

int main(){
	cin>>n;
	if(n%2==1){
		cout<<"NO ANSWER!"<<endl;
		return 0;
	}
	path[0] = 1;
	dfs(1);
	if(!res){
		cout<<"NO ANSWER!"<<endl;
		return 0;
	}
	return 0; 
} 
