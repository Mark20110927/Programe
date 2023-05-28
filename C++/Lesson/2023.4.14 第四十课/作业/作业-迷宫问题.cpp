#include<bits/stdc++.h>
using namespace std;
//��ҵ-�Թ�����
const int N = 100;
int m,n;//���� 
//��
struct node{
	int x;
	int y;
}path[N],end;//·�� 
bool mapf[20][20]; //���
//��������
int x[] = {1,0,-1,0};
int y[] = {0,1,0,-1};
//�ж��޽�
bool res = false; 
void dfs(int sx,int sy,int step){//��һ������㽫Ҫ�ߵĵڼ��� 
	//���ڱ߽�
	if(sx == end.x&&sy==end.y){
		res = true;
		for(int i = 0;i<step-1;i++){
			cout<<"("<<path[i].x<<","<<path[i].y<<")"<<"->";
		}
		cout<<"("<<path[step-1].x<<","<<path[step-1].y<<")"<<endl;
	}
	for(int i = 0;i<=3;i++){ 
		node next;
		next.x = sx+x[i];
		next.y = sy+y[i];
		if(mapf[next.x][next.y]==1){
			//������ߵĵ�
			mapf[next.x][next.y] = 0;
			path[step] = next;
			//�ݹ� 
			dfs(next.x,next.y,step+1);
			//�ָ��ֳ� 
			mapf[next.x][next.y] = 1;
		}
	}
} 
int main(){
	cin>>m>>n;
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++)
			cin>>mapf[i][j];
	} 
	cin>>path[0].x>>path[0].y;
	cin>>end.x>>end.y;
	dfs(path[0].x,path[0].y,1);
	if(res==false)
		cout<<-1;
	return 0; 
} 
