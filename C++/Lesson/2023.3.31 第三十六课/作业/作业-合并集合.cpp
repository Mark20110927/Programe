#include<bits/stdc++.h>
using namespace std;
//��ҵ-�ϲ�����
const int N = 1e5;
int pre[N];
int find(int x){
	if(pre[x]==x)
		return x;
	return pre[x] = find(pre[x]);
}
//�� ���Ƿ��� ����������
void join(int a,int b){
	int fa = find(a),fb = find(b);
	if(fa!=fb){
		pre[a] = fb;
	}
}
int main(){
	int n,m;
	char op;
	cin>>n>>m;
	//��ʼ��
	for(int i = 1;i<=n;i++)
		pre[i] = i;
	cin>>op;
	while(m--){
		int a,b;
		cin>>a,b;
		if(op=='M'){
			join(a,b);
		}
		else{
			int fa = find(a),fb = find(b);
			if(fa==fb)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0; 
} 
