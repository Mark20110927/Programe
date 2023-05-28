#include<bits/stdc++.h>
using namespace std;
//抓住这头牛 
const int N  = 1e5+10;
bool wz[N];//位置数组
struct step{
	int x;//坐标 
	int bs;//步数 
	step(int x1,int bs1):x(x1),bs(bs1){}
}; 
//队列
queue<step> q;
//农夫和牛的位置
int nf,niu; 
void bfs(){
	//把起点加入队列
	q.push(step(nf,0)); 
	//标记起始点
	wz[nf] = true;
	//遍历所有可能
	while(!q.empty()){
		//访问队首元素
		step tou = q.front();
		//判断是否满足条件
		if(tou.x==niu){
			cout<<tou.bs;
			return;
		}
		//弹出队首
		q.pop(); 
		//遍历其他节点
		//左走
		if(tou.x-1>=0&&!wz[tou.x-1]){
			q.push(step(tou.x-1,tou.bs+1));
			wz[tou.x-1] = true;
		} 
		//右走
		if(tou.x+1<=N&&!wz[tou.x+1]){
			q.push(step(tou.x+1,tou.bs+1));
			wz[tou.x+1] = true;
		} 
		//两倍走
		if(tou.x*2<=N&&!wz[tou.x*2]){
			q.push(step(tou.x*2,tou.bs+1));
			wz[tou.x*2] = true;
		} 
	} 
} 
int main(){
	cin>>nf>>niu;
	bfs();
	return 0; 
} 
