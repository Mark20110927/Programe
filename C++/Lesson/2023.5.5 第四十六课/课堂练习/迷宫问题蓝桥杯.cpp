#include<bits/stdc++.h>
using namespace std;
//�Թ��������ű� 
const int N = 1000; 
struct node{
	int hang;
	int lie;
	int step;
	string path;
}; 
//��ͼ 
int Map[N][N];
//��� �յ�
node start,end;
//�� �� 
int hang,lie;
//����
queue<node> q; 
//�������� ����DULR��˳�� 
int dhang[] = {1,-1,0,0};
int dlie[]  = {0,0,-1,1}; 
char dpath[] = {'D','U','L','R'};
//����
void bfs(){
	//������
	start.step = 0;
	q.push(start);
	//������
	Map[start.hang][start.lie] = 1;
	//�жϷǿ�
	while(!q.empty()){
		//ȡ������
		node ds = q.front();
		//��������
		q.pop();
		//�ж϶���
		if(ds.hang==end.hang&&ds.lie==end.lie){
			cout<<ds.step<<endl;
			cout<<ds.path;
			return;
		} 
		//�������п���
		for(int i = 0;i<=3;i++){
			node next;
			next.hang = ds.hang+dhang[i];
			next.lie = ds.lie+dlie[i];
			//�ж��Ƿ����
			if(Map[next.hang][next.lie]==0){
				//�仯
				next.step = ds.step+1;
				next.path = ds.path+dpath[i];
				//���
				q.push(next);
				//���
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
