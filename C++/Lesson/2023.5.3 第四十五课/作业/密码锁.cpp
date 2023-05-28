#include<bits/stdc++.h>
using namespace std;
//������ 
struct node{
	int num[4];
	int step;
};//��ʼ ���� 
//�������
bool flag[11][11][11][11];
//����
queue<node> q; 
//��ʼ״̬ ����״̬ ��һ���� ���׵�
node start,end,next,ds; 
void bfs(){
	//������
	q.push(start);
	//������
	flag[start.num[0]][start.num[1]][start.num[2]][start.num[3]] = true;
	while(!q.empty()){
		//�õ�����
		node ds = q.front();
		//����
		q.pop(); 
		//�ж�����
		if(ds.num[0]==end.num[0]&&ds.num[1]==end.num[1]&&ds.num[2]==end.num[2]&&ds.num[3]==end.num[3]){
			cout<<ds.step;
			return;
		}
		//�������п���
		//��һ
		for(int i = 0;i<=3;i++){
			next = ds;
			next.num[i]++;
			//���
			if(next.num[i]==10)
				next.num[i] = 1; 
			//�ж��Ƿ���� 
			if(flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]]==false){
				flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = true; 
				next.step++;
				q.push(next);
			}
		} 
		//��һ
		for(int i = 0;i<=3;i++){
			next = ds;
			next.num[i]--;
			//���
			if(next.num[i]==0)
				next.num[i] = 9; 
			//�ж��Ƿ���� 
			if(flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]]==false){
				flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = true; 
				next.step++;
				q.push(next);
			}
		} 
		//����
		for(int i = 0;i<3;i++){
			next = ds;
			next.num[i] = ds.num[i+1];
			next.num[i+1] = ds.num[i]; 
			//�ж��Ƿ���� 
			if(flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]]==false){
				flag[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = true; 
				next.step++;
				q.push(next);
			}
		} 
	} 
} 
int main(){
	//������� 
	for(int i = 0;i<4;i++){
		cin>>start.num[i];
	}
	//�����յ�
	for(int i = 1;i<4;i++){
		cin>>end.num[i];
	} 
	start.step = 0;
	bfs();
	return 0; 
} 
