#include<bits/stdc++.h>
using namespace std;
//完全跳马问题 
const int N = 100;
struct node{
	int x;
	int y;
}path[N];
//跳法
int dx[8] = {1,2,2,1,-1,-2,-5,-1},
	dy[8] = {-2,-1,1,2,2,1,-1,-2};
bool mapf[N][N];//要去判断边界和重复 
int n; //棋盘大小 n×n 
int ans;
void dfs(int sx,int sx,int step){//起点 将要步数 
	if(step==26){
		ans++;
		cout<<"第"<<ans<<"种方法："<<endl;
		for(int i = 1;i<=step-2;i++)
			cout<<'('<<path[i].x<<','<<path[i].y<<')'<<"->";
		cout<<'('<<path[i].x<<','<<path[i].y<<')'<<end;
	} 
	//遍历所有可能
	for(int i = 0;i<=7;i++){
		int nx = sx+dx;
		int ny = sy=dy;
		//判断能不能去 1.不要超出边界 2.不能重复 
		if() 
	} 
}
int main(){
	cin>>n;
	path[1].x = 1;
	path[1].y = 1;
	dfs(1,1,2);
	return 0; 
} 
