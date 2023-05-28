#include<bits/stdc++.h>
using namespace std;
//������
const int N = 50;
int path[N];//·�� 
bool flag[N]; //���
int n;//���� 
bool res;//��
bool prime(int x,int y){
	int s = x+y;
	if(s<=1)
		return false;
	for(int i = 2;i*i<=s;i++){
		if(s%i==0)
			return false;
	}
	return true;                              
} 
void dfs(int step){//��Ҫ�ߵĵڼ��� 
	//�߽� ����
	if(step==n&&prime(path[0],path[n-1])){
		res = true;
		for(int i = 0;i<n;i++)
			cout<<path[i]<<' ';
		cout<<endl;
		return;
	} 
	//�������п��� �����������������Ķ���
	for(int i = 2;i<=n;i++){//û���ù� ���Һ���һ���ĺ�Ϊ���� 
		if(!flag[i]&&prime(path[step-1],i)){
			path[step] = i;//��i����·��
			flag[i] = true;//���i�ѱ��ù�
			dfs(step+1);//�ݹ���� 
			flag[i] = false;//�ָ��ֳ� ��д�ɲ�д 
			path[step] = 0;//�ָ��ֳ� 
		}
	} 
} 
int main(){
	cin>>n;
	if(n%2==1){
		cout<<"NO ANSWER!";
		return 0;
	}
	path[0] = 1;
	dfs(1);
	if(res==false)
		cout<<"NO ANSWER!";
	return 0; 
} 
