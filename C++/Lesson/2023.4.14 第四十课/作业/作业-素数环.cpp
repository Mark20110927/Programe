#include<bits/stdc++.h>
using namespace std;
//��ҵ-������
const int N = 50; 
int path[N];//·�� 
bool flag[N];//���
int n;//���� 
bool res;//��
bool prime(int a,int b){
	int s = a+b;
	if(s<=1)
		return false; 
	for(int i = 2;i*i<=s;i++){
		if(s%i==0)
			return false;
	}
	return true;
}
void dfs(int step){//��Ҫ�ߵĵڼ��� 
	if(step==n&&prime(path[0],path[n-1])){
		res = true;
		for(int i = 0;i<n;i++){
			cout<<path[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i = 2;i<=n;i++){
		if(!flag[i]&&prime(path[step-1],i)){
			path[step] = i;
			flag[i] = true;
			dfs(step+1);
			flag[i] = false;
		}
	}
}

//�߽� ����
//�������п��� �����������������Ķ���
//û���ù� ���Һ���һ���ĺ�Ϊ���� 
//��i����·��
//���i�ѱ��ù�
//�ݹ���� 
//�ָ��ֳ�
//�ָ��ֳ� ��д�ɲ�д 

int main(){
	cin>>n;
	if(n%2==1){
		cout<<"NO ANSWER!"<<endl;
		return 0;
	}
	path[0] = 1;
	dfs(1);
	if(!res){
		cout<<"NO ANSWER!"<<endl;
		return 0;
	}
	return 0; 
} 
