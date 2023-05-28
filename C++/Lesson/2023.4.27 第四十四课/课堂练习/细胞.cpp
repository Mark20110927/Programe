#include<bits/stdc++.h>
using namespace std;
//ϸ�� 
const int N = 100;
struct node{
	int x;
	int y;
};
queue<node> q;
int mapf[N][N];//��ͼ 
int m,n,sum;//���� ���� 
int hang[] = {1,0,-1,0};
int lie[]  = {0,1,0,-1};//��λ���� 
void bfs(int sx,int sy){//��� �յ� 
	//������ ������
	node s;
	s.x = sx;
	s.y = sy;
	mapf[sx][sy] = 0;
	q.push(s);
	//���зǿվ�ѭ��
	while(!q.empty()) {
		//������ǲ�������
		node ns = q.front();
		mapf[ns.x][ns.y] = 0;
		//�������׵����ڵ�
		for(int i = 0;i<4;i++){
			int ex = ns.x+hang[i];
			int ey = ns.y+lie[i];
			//�ж����ڵ��Ƿ��������� 
			if(ex>=1&&ex<=n&&ey>=1&&ey<=m&&mapf[ex][ey]!=0){
				//��Ǹõ�
				mapf[ex][ey] = 0;
				//�Ѹõ�ŵ�ĩβ 
				node end;
				end.x = ex;
				end.y = ey;
				q.push(end);
			}
		} 
		//ɾ�����
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
