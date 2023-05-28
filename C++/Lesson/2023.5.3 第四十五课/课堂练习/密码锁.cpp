#include<bits/stdc++.h>
using namespace std;
//密码锁 
struct node{
	int num[4];
	int step;
};//初始 结束 
//标记数组
bool flag[11][11][11][11];
//队列
queue<node> q; 
//初始状态 结束状态 下一个点 队首点
node start,end,next,ds; 
void bfs(){
	//起点入队
	q.push(start);
	//标记起点
	flag[start.num[0]][start.num[1]][start.num[2]][start.num[3]] = true;
	while(!q.empty()){
		//拿到队首
		node ds = q.front();
		//弹出
		q.pop(); 
		//判断条件
		if(ds.num[0]==end.num[0]&&ds.num[1]==end.num[1]&&ds.num[2]==end.num[2]&&ds.num[3]==end.num[3]){
			cout<<ds.step;
			return;
		}
		//遍历所有可能
		//加一
		for(int i = 0;i<=3;i++){
			next = ds;
			next.num[i]++;
			//溢出
			if(next.num[i]==10)
				next.num[i] = 1; 
			//判断是否访问 
			if(flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]]==false){
				flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = true; 
				next.step++;
				q.push(next);
			}
		} 
		//减一
		for(int i = 0;i<=3;i++){
			next = ds;
			next.num[i]--;
			//溢出
			if(next.num[i]==0)
				next.num[i] = 9; 
			//判断是否访问 
			if(flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]]==false){
				flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = true; 
				next.step++;
				q.push(next);
			}
		} 
		//交换
		for(int i = 0;i<3;i++){
			next = ds;
			next.num[i] = ds.num[i+1];
			next.num[i+1] = ds.num[i]; 
			//判断是否访问 
			if(flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]]==false){
				flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = true; 
				next.step++;
				q.push(next);
			}
		} 
	} 
} 
int main(){
	//输入起点 
	for(int i = 0;i<4;i++){
		cin>>start.num[i];
	}
	//输入终点
	for(int i = 1;i<4;i++){
		cin>>end.num[i];
	} 
	start.step = 0;
	bfs();
	return 0; 
} 
