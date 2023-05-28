#include<bits/stdc++.h>
using namespace std;
//作业-完全跳马问题 
const int N = 100;
struct node{
	int x;
	int y;
}path[N];
int n,ans;
bool mapf[N][N];
int dx[8] = {1,2,2,1,-1,-2,-2,-1},
	dy[8] = {-2,-1,1,2,2,1,-1,-2};
void dfs(int sx,int sy,int step){
	if(step==n*n+1){
		ans++;
		cout<<"第"<<ans<<"种方法:"<<endl; 
		for(int i = 1;i<=step-2;i++)
			cout<<'('<<path[i].x<<','<<path[i].y<<')'<<"->";
		cout<<'('<<path[step-1].x<<','<<path[step-1].y<<')'<<endl;
	}
	
	for(int i = 0;i<=7;i++){
		int nx = sx+dx[i];
		int ny = sy+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&mapf[nx][ny]==false){
			path[step].x = nx;
			path[step].y = ny;
			mapf[nx][ny] = true;
			dfs(nx,ny,step+1);
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
