#include<bits/stdc++.h>
using namespace std;
//n�ʺ�����
const int N = 20;
char mapf[N][N];//���� 
int n;//���̴�С �ʺ���� 
bool flaglie[N],flagdj[N],flagfdj[N];
void dfs(int hang){//����Ҫ�ڵڼ�������ʺ� 
	//���� 
	if(hang==n){
		for(int i = 0;i<n;i++)
			cout<<mapf[i]<<endl;
		cout<<endl;
	} 
	//�������п��� 
	for(int lie = 0;lie<n;lie++){
		//�ж��Ƿ��������� ͬһ�� ͬһ�Խ��� ���Խ���
		if(flaglie[lie]==0&&flagdj[lie-hang+n]==0&&flagfdj[lie+hang]==0){
			//���
			flaglie[lie] = flagdj[lie-hang+n] = flagfdj[lie+hang] = 1;
			mapf[hang][lie] = 'Q';
			//�ݹ�
			dfs(hang+1);
			//�ָ��ֳ�
			flaglie[lie] = flagdj[lie-hang+n] = flagfdj[lie+hang] = 0;
			mapf[hang][lie] = '.';
		} 
	}
} 
int main(){
	cin>>n;
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++)
			mapf[i][j] = '.';
	dfs(0);
	return 0; 
} 
