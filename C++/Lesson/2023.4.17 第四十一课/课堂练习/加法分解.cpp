#include<bits/stdc++.h>
using namespace std;
//�ӷ��ֽ� 
const int N = 100;
int path[N];
void dfs(int step,int x){//��Ҫ�ߵڼ��� ʣ��Ĵ��ֽ���� 
	//�߽� ���� ÿ��һ�����־ͳ�һ�����
	if(step!=1) {
		for(int i = 1;i<=step-1;i++)
			cout<<path[i]<<" + ";
		cout<<x<<endl;
	}
	//�������п��� ��֤���治С��ǰ�� ��һ��С�ڵ���ʣ�µ�һ��
	for(int i = path[step-1];i<=x/2;i++){
		//��ס·��
		path[step] = i;
		//�ݹ� 
		dfs(step+1,x-i);
	} 
}
int main(){
	int n;
	cin>>n;
	path[0] = 1;
	dfs(1,n);
	return 0; 
} 
