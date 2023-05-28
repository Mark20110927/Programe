#include<bits/stdc++.h>
using namespace std;
//�ϲ�����
const int N = 1e5;
int pre[N];
int find(int x){
	if(pre[x]==x)
		return x;
	return pre[x] = find(pre[x]);
} 
//�� ���Ƿ��� ����������
void join(int x,int y){
	int fx = find(x),fy = find(y);
	if(fx!=fy)
		pre[fx] = fy;
} 
int main(){
	int n,m;
	cin>>n>>m;
	//��ʼ��
	for(int i = 1;i<=n;i++)
		pre[i] = i;
	while(m--){
		char op;
		int a,b;
		cin>>op>>a>>b;
		if(op=='M')
			join(a,b);
		else{
			int fa = find(a),fb = find(b);
			if(fa==fb)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl; 
		}
	}
	return 0; 
} 
