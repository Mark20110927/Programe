#include<bits/stdc++.h>
using namespace std;
//ץס��ͷţ 
const int N  = 1e5+10;
bool wz[N];//λ������
struct step{
	int x;//���� 
	int bs;//���� 
	step(int x1,int bs1):x(x1),bs(bs1){}
}; 
//����
queue<step> q;
//ũ���ţ��λ��
int nf,niu; 
void bfs(){
	//�����������
	q.push(step(nf,0)); 
	//�����ʼ��
	wz[nf] = true;
	//�������п���
	while(!q.empty()){
		//���ʶ���Ԫ��
		step tou = q.front();
		//�ж��Ƿ���������
		if(tou.x==niu){
			cout<<tou.bs;
			return;
		}
		//��������
		q.pop(); 
		//���������ڵ�
		//����
		if(tou.x-1>=0&&!wz[tou.x-1]){
			q.push(step(tou.x-1,tou.bs+1));
			wz[tou.x-1] = true;
		} 
		//����
		if(tou.x+1<=N&&!wz[tou.x+1]){
			q.push(step(tou.x+1,tou.bs+1));
			wz[tou.x+1] = true;
		} 
		//������
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
