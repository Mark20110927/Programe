#include<bits/stdc++.h>
using namespace std;
//√‘π¨Œ Ã‚-¿∂«≈±≠ 
const int N = 1e3;
struct node{
	int x;
	int y;
	int step;
	string path;
}; 
node start,end;
int Map[N][N];
queue<node> q;
int m,n;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
char dpath[] = {'D','U','L','R'};
void bfs(){
	start.step = 0;
	q.push(start);
	Map[start.x][start.y] = 1; 
	while(!q.empty()){
		node head = q.front();
		q.pop();
		if(head.x==end.x&&head.y==end.y){
			cout<<head.step<<endl;
			cout<<head.path;
			return;
		}
		for(int i = 0;i<=3;i++){
			node next;
			next.x = head.x+dx[i];
			next.y = head.y+dy[i];
			if(Map[next.x][next.y]==0){
				next.step = head.step+1;
				next.path = head.path+dpath[i];
				q.push(next);
				Map[next.x][next.y] = 1;
			}
		}
	}
	
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<N;i++)
		for(int j = 1;j<N;j++)
			Map[i][j] = 1;
	for(int i = 1;i<=n;i++)
		for(int j = 1;j<=m;j++)
			cin>>Map[i][j];
	cin>>start.x>>start.y;
	cin>>end.x>>end.y;
	bfs();
	return 0; 
} 
