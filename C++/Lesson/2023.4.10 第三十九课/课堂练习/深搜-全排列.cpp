#include<bits/stdc++.h>
using namespace std;
//����-ȫ���� 
const int N = 8;
int path[N];//�洢������·�� 
bool flag[N];//���ʹ�õ����� 
int n; 
void dfs(int step){
	//�߽�
	if(step==n){
		for(int i = 0;i<n;i++){
			cout<<path[i]<<' ';
		}
		cout<<endl;
		return;
	} 
	//��������һ������п��� 
	for(int i = 1;i<=n;i++){
		if(!flag[i]){
			flag[i] = true;//���
			path[step] = i;//��ס·��
			dfs(step+1);//�ݹ���ò���+1 
			flag[i] = false; //���� �ָ��ֳ� 
		}
	}
}
int main(){
	cin>>n;
	dfs(0);
	return 0; 
} 
