#include<bits/stdc++.h>
using namespace std;
//细胞 
const int N = 100;
struct node{
	int x;
	int y;
};
queue<node> q;
int mapf[N][N];//地图 
int m,n,sum;//行数 列数 
int hang[] = {1,0,-1,0};
int lie[]  = {0,1,0,-1};//方位数组 
void bfs(int sx,int sy){//起点 终点 
	//起点入队 标记起点
	node s;
	s.x = sx;
	s.y = sy;
	mapf[sx][sy] = 0;
	q.push(s);
	//队列非空就循环
	while(!q.empty()) {
		//看起点是不是满足
		node ns = q.front();
		mapf[ns.x][ns.y] = 0;
		//遍历队首的相邻点
		for(int i = 0;i<4;i++){
			int ex = ns.x+hang[i];
			int ey = ns.y+lie[i];
			//判断相邻点是否满足条件 
			if(ex>=1&&ex<=n&&ey>=1&&ey<=m&&mapf[ex][ey]!=0){
				//标记该点
				mapf[ex][ey] = 0;
				//把该点放到末尾 
				node end;
				end.x = ex;
				end.y = ey;
				q.push(end);
			}
		} 
		//删除起点
		q.pop();
	}
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>mapf[i][j];
		}
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(mapf[i][j]!=0){
				sum++;
				bfs(i,j);
			}
		}
	} 
	cout<<sum;
	return 0; 
} 
