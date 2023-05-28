#include<bits/stdc++.h>
using namespace std;
//迷宫问题蓝桥杯 
const int N = 1000; 
struct node{
	int hang;
	int lie;
	int step;
	string path;
}; 
//地图 
int Map[N][N];
//起点 终点
node start,end;
//行 列 
int hang,lie;
//队列
queue<node> q; 
//方向数组 按照DULR的顺序 
int dhang[] = {1,-1,0,0};
int dlie[]  = {0,0,-1,1}; 
char dpath[] = {'D','U','L','R'};
//广搜
void bfs(){
	//起点入队
	start.step = 0;
	q.push(start);
	//标记起点
	Map[start.hang][start.lie] = 1;
	//判断非空
	while(!q.empty()){
		//取出队首
		node ds = q.front();
		//弹出队首
		q.pop();
		//判断队首
		if(ds.hang==end.hang&&ds.lie==end.lie){
			cout<<ds.step<<endl;
			cout<<ds.path;
			return;
		} 
		//遍历所有可能
		for(int i = 0;i<=3;i++){
			node next;
			next.hang = ds.hang+dhang[i];
			next.lie = ds.lie+dlie[i];
			//判断是否可能
			if(Map[next.hang][next.lie]==0){
				//变化
				next.step = ds.step+1;
				next.path = ds.path+dpath[i];
				//入队
				q.push(next);
				//标记
				Map[next.hang][next.lie] = 1; 
			} 
		}
	} 
} 
int main(){
	cin>>hang>>lie;
	for(int i = 0;i<N;i++)
		for(int j = 0;j<N;j++)
			Map[i][j] = 1;
	for(int i = 1;i<=hang;i++)
		for(int j = 1;j<=lie;j++)
			cin>>Map[i][j];
	cin>>start.hang>>start.lie;
	cin>>end.hang>>end.lie;
	bfs();
	return 0; 
} 
