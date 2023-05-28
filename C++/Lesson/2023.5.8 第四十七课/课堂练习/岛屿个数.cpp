#include<bits/stdc++.h>
using namespace std;
//�������
const int N = 110;
//ƫ�� �������� ���ϣ����ϣ����£����� 
int dh[] = {-1,1,0,0,-1,-1,1,1};
int dl[] = {0,0,-1,1,-1,1,-1,1};
//��ˮ�ð˸���������ǰ�ĸ�
struct node{
	int h;
	int l;
};
node s;//��� 
node map1[N][N];//��ͼ
bool flag[N][N];//���
int h,l,res;//�� �� �� 
void bfs1(){//�Ӻ�ˮ�ĽǶȿ�ʼ�ҵ��� �ҵ��˾ͱ�� 
	//������
	queue<node> q;
	q.push(s);
	//���
	flag[s.h][s.l] = true;
	while(!q.empty()){
		//ȡ������
		node ds = q.front();
		//��������
		q.pop();
		//�������п���
		for(int i = 1;i<8;i++){
			int nh = ds.h+dh[i];
			int nl = ds.l+dl[i];
			if(!flag[nh][nl]&&nh>=0&&nh<=h+1&&nl>=0&&nl<=lie+1){
				if(map1[nh][nl]==1)
					bfs2(nh,nl);//�����ǵ���һ���� ������һ��bfs��� 
				else{//�����Ǻ����Ǿ����ź��������� 
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
		//��ʼ�� 
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
		bfs1();//�Ӻ�ˮ�ĽǶȿ�ʼbfs �˸������ҵ���
		
	}
	return 0; 
} 
