#include<bits/stdc++.h>
using namespace std;
//��ȫ�������� 
const int N = 100;
struct node{
	int x;
	int y;
}path[N];
//����
int dx[8] = {1,2,2,1,-1,-2,-5,-1},
	dy[8] = {-2,-1,1,2,2,1,-1,-2};
bool mapf[N][N];//Ҫȥ�жϱ߽���ظ� 
int n; //���̴�С n��n 
int ans;
void dfs(int sx,int sx,int step){//��� ��Ҫ���� 
	if(step==26){
		ans++;
		cout<<"��"<<ans<<"�ַ�����"<<endl;
		for(int i = 1;i<=step-2;i++)
			cout<<'('<<path[i].x<<','<<path[i].y<<')'<<"->";
		cout<<'('<<path[i].x<<','<<path[i].y<<')'<<end;
	} 
	//�������п���
	for(int i = 0;i<=7;i++){
		int nx = sx+dx;
		int ny = sy=dy;
		//�ж��ܲ���ȥ 1.��Ҫ�����߽� 2.�����ظ� 
		if() 
	} 
}
int main(){
	cin>>n;
	path[1].x = 1;
	path[1].y = 1;
	dfs(1,1,2);
	return 0; 
} 
