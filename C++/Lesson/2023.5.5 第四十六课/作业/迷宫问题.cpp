#include<bits/stdc++.h>
using namespace std;
//ÃÔ¹¬ÎÊÌâ
const int N = 1e3;
struct node{
	int x;
	int y;
	int step;
}; 
node start,end;
int Map[N][N];
queue<node> q;
int m,n;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
void bfs(){
	start.step = 0;
	while(!q.empty()){
		node head = q.front();
		q.pop();
		if(head.x==end.x&&head.y==end.y){
			cout<<head.step;
			return;
		}
		for(int i = 0;i<=3;i++){
			node next = head;
			next.x+=dx[i];
			next.y+=dy[i];
			if(Map[next.x][next.y]==1){
				next.step++;
				q.push(next);
				Map[next.x][next.y] = 0;
			}
		}
	}
	
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<n;i++)
		for(int j = 1;j<m;j++)
			cin>>Map[i][j];
	cin>>start.x>>start.y;
	cin>>end.x>>end.y;
	q.push(start);
	Map[start.x][start.y] = 0;
	bfs();
	return 0; 
} 
