#include<bits/stdc++.h>
using namespace std;
//��ı��� 
//���
const int N = 100; 
int endx,endy;
int ans;//�𰸵ĸ��� 
struct node{
	int x;
	int y;
}path[N];
//������
int dx[] = {1,2,2,1};
int dy[] = {2,1,-1,-2};
void dfs(int sx,int sy,int step){
	//�߽����� ����
	if(sx==endx&&sy==endy){
		ans++;
		cout<<"��"<<ans<<"�ַ�����"<<endl;
		for(int i = 0;i<=step-2;i++)
			cout<<'('<<path[i].x<<','<<path[i].y<<')'<<"->";
		cout<<'('<<path[step-1].x<<','<<path[step-1].y<<')' ;
		cout<<endl; 
	} 
	//�������п���
	for(int i = 0;i<=3;i++){
		int nx = sx+dx[i],ny = sy+dy[i];
		if(nx<=endx&&nx>=0&&ny<=endy&&ny>=0){
			path[step].x = nx;
			path[step].y = ny;
			dfs(nx,ny,step+1);
		}
	} 
} 
int main(){
	cin>>endx>>endy;
	dfs(0,0,1);
	return 0; 
} 
