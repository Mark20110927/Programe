#include<bits/stdc++.h>
using namespace std;
//ѡ��
const int N = 100;
bool like[N][N];//�ڼ���������ϲ���ڼ����� 
int n;//�������鱾�� 
int path[N];//·�� 
bool flag[N];//ĳһ�����ѷ���
int ans;//������ 
void dfs(int step){
	//���� �߽�
	if(step==n+1){
		ans++;
		cout<<"��"<<ans<<"�ַ���"<<endl; 
		for(int i = 1;i<=n;i++)
			cout<<"  ��"<<i<<"λͬѧϲ��"<<char(64+path[i])<<endl; 
		cout<<endl;
		return;
	} 
	//����ÿһ�ֿ���
	for(int i = 1;i<=n;i++){
		if(!flag[i]&&like[step][i]){//��֦ 
			//���
			flag[i] = 1;
			path[step] = i;
			//�ݹ� 
			dfs(step+1);
			//�ָ��ֳ� 
			flag[i] = 0;
		}
	}
}
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		for(int j = 1;j<=n;j++)
			cin>>like[i][j];
	dfs(1);
	return 0; 
} 
