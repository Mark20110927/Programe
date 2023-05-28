#include<bits/stdc++.h>
using namespace std;
//岛屿个数
const int N = 110;
//偏移 上下左右 左上，右上，左下，右下 
int dh[] = {-1,1,0,0,-1,-1,1,1};
int dl[] = {0,0,-1,1,-1,1,-1,1};
//海水用八个，岛屿用前四个
struct node{
	int h;
	int l;
};
node s;//起点 
node map1[N][N];//地图
bool flag[N][N];//标记
int h,l,res;//行 列 答案 
void bfs1(){//从海水的角度开始找岛屿 找到了就标记 
	//起点入队
	queue<node> q;
	q.push(s);
	//标记
	flag[s.h][s.l] = true;
	while(!q.empty()){
		//取到队首
		node ds = q.front();
		//弹出对手
		q.pop();
		//遍历所有可能
		for(int i = 1;i<8;i++){
			int nh = ds.h+dh[i];
			int nl = ds.l+dl[i];
			if(!flag[nh][nl]&&nh>=0&&nh<=h+1&&nl>=0&&nl<=lie+1){
				if(map1[nh][nl]==1)
					bfs2(nh,nl);//发现是岛的一部分 就用另一个bfs标记 
				else{//发现是海，那就沿着海继续搜索 
					node next = {nh,nl};
					q.push(next);
					flag[nh][nl] = true;
				}
			}
		} 
	} 
}
int main(){
	int T;
	cin>>T;
	while(T--){
		//初始化 
		memset(map1,0,sizeof map1);
		memset(flag,0,sizeof flag);
		res = 0;
		s = {0,0};
		cin>>h>>l;
		for(int i = 1;i<=h;i++){
			for(int j = 1;j<=l;j++){
				cin>>map1[i][j];
			}
		}
		bfs1();//从海水的角度开始bfs 八个方向找岛屿
		
	}
	return 0; 
} 
