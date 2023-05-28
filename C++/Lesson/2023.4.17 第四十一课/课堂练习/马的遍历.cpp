#include<bits/stdc++.h>
using namespace std;
//马的遍历 
//存点
const int N = 100; 
int endx,endy;
int ans;//答案的个数 
struct node{
	int x;
	int y;
}path[N];
//向右走
int dx[] = {1,2,2,1};
int dy[] = {2,1,-1,-2};
void dfs(int sx,int sy,int step){
	//边界问题 出口
	if(sx==endx&&sy==endy){
		ans++;
		cout<<"第"<<ans<<"种方案："<<endl;
		for(int i = 0;i<=step-2;i++)
			cout<<'('<<path[i].x<<','<<path[i].y<<')'<<"->";
		cout<<'('<<path[step-1].x<<','<<path[step-1].y<<')' ;
		cout<<endl; 
	} 
	//遍历所有可能
	for(int i = 0;i<=3;i++){
		int nx = sx+dx[i],ny = sy+dy[i];
		if(nx<=endx&&nx>=0&&ny<=endy&&ny>=0){
			path[step].x = nx;
			path[step].y = ny;
			dfs(nx,ny,step+1);
		}
	} 
} 
int main(){
	cin>>endx>>endy;
	dfs(0,0,1);
	return 0; 
} 
