#include<bits/stdc++.h>
using namespace std;
//完全跳马问题 
const int N = 100;
struct node{
	int x;
	int y;
}path[N];
//跳法
int dx[8] = {1,2,2,1,-1,-2,-2,-1},
	dy[8] = {-2,-1,1,2,2,1,-1,-2};
bool mapf[N][N];//要去判断边界和重复 
int n; //棋盘大小 n×n 
int ans;
void dfs(int sx,int sy,int step){//起点 将要步数 
	if(step==n*n+1){
		ans++;
		cout<<"第"<<ans<<"种方法："<<endl;
		for(int i = 1;i<=step-2;i++)
			cout<<'('<<path[i].x<<','<<path[i].y<<')'<<"->";
		cout<<'('<<path[step-1].x<<','<<path[step-1].y<<')'<<endl;
	} 
	//遍历所有可能
	for(int i = 0;i<=7;i++){
		int nx = sx+dx[i];
		int ny = sy+dy[i];
		//判断能不能去 1.不要超出边界 2.不能重复 
		if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&mapf[nx][ny]==false){
			path[step].x = nx;
			path[step].y = ny;
			mapf[nx][ny] = true;
			//递归 
			dfs(nx,ny,step+1);
			//恢复现场
			 mapf[nx][ny] = false;
		} 
	} 
}
int main(){
	cin>>n;
	path[1].x = 1;
	path[1].y = 1;
	mapf[1][1] = true;
	dfs(1,1,2);
	return 0; 
} 
