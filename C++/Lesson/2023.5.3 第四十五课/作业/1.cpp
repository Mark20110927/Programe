#include<bits/stdc++.h>
using namespace std;
//√‘π¨Œ Ã‚ 
int n,m;
struct node{
	int x;
	int y;
}start,end;
bool mapf[100][100];
int dx[] = {0,-1,0,1};
int dy[] = {-1,0,1,0};
queue<node> q;
int res;
void bfs(){
	q.push(start);
	mapf[start.x][start.y] = false;
	while(!q.empty()){
		node now = q.front();
		if(now.x==end.x&&now.y==end.y){
			cout<<res;
			return;
		}
		q.pop();
		for(int i = 0;i<4;i++){
			if(now.x+dx[i]<=m&&now.y+dy[i]<=n&&!mapf[now.x][now.y]){
				res++;
				q.push(now);
			}
		}
		
		
	}
}
int main(){
	cin>>n>>m;
	for(int i =  1;i<=n;i++)
		for(int j = 1;j<=m;j++)
			cin>>mapf[i][j];
	cin>>start.x>>start.y>>end.x>>end.y;
	bfs();
	return 0; 
} 
