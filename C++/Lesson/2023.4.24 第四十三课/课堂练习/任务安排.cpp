#include<bits/stdc++.h>
using namespace std;
//������ 
const int N = 100;
int sy[N][N];//�������� 
int n;//���������� 
long long sumsy;//������
long long maxsy;//����������� 
int path[N],final_path[N];//·������,����·�� 
bool flag[N];//������� 
void dfs(int step){//��Ҫ�ߵĲ��� 
	if(step==n+1){
		//���� 
		if(sumsy>maxsy){
			maxsy = sumsy;
		for(int i = 1;i<=n;i++)
			final_path[i] = path[i];
		}
		//��ȥ 
		return;
	}
	//�������п���
	for(int i = 1;i<=n;i++){
		if(!flag[i]){
			//���
			flag[i] = true;
			path[step] = i;
			sumsy+=sy[step][i];
			//�ݹ�
			dfs(step+1);
			//�ָ��ֳ�
			flag[i] = false; 
			sumsy-=sy[step][i];
		}
	} 
}
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		for(int j = 1;j<=n;j++)
			cin>>sy[i][j];
	dfs(1);
	cout<<"������淽���ǣ�"<<endl;
	for(int i = 1;i<=n;i++){
		cout<<char(64+i)<<":Task "<<final_path[i]<<endl;
	}
	cout<<"������棺"<<maxsy; 
	return 0; 
} 
