#include<bits/stdc++.h>
using namespace std;
//�Թ�����
const int N = 20; 
struct node{
	int hang;
	int lie;
	int step;
}; 
//��ͼ 
int Map[N][N];
//��� �յ�
node start,end;
//�� �� 
int hang,lie;
//����
queue<node> q; 
//��������
int dhang[] = {1 ,0 ,-1,0 };
int dlie[]  = {0 ,1 ,0 ,-1}; 
//����
void bfs(){
	//������
	start.step = 0;
	q.push(start);
	//������
	Map[start.hang][start.lie] = 0;
	//�жϷǿ�
	while(!q.empty()){
		//ȡ������
		node ds = q.front();
		//��������
		q.pop();
		//�ж϶���
		if(ds.hang==end.hang&&ds.lie==end.lie){
			cout<<ds.step;
			return;
		} 
		//�������п���
		for(int i = 0;i<=3;i++){
			node next;
			next.hang = ds.hang+dhang[i];
			next.lie = ds.lie+dlie[i];
			//�ж��Ƿ����
			if(Map[next.hang][next.lie]==1){
				//�仯
				next.step = ds.step+1;
				//���
				q.push(next);
				//���
				Map[next.hang][next.lie] = 0; 
			} 
		}
	} 
} 
int main(){
	cin>>hang>>lie;
	for(int i = 1;i<=hang;i++)
		for(int j = 1;j<=lie;j++)
			cin>>Map[i][j];
	cin>>start.hang>>start.lie;
	cin>>end.hang>>end.lie;
	bfs();
	return 0; 
} 
