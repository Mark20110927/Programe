#include<bits/stdc++.h>
using namespace std;
//�ɻ����� 
const int N = 20;
struct plane{
	int t;//���� 
	int d;//���� 
	int l;//���� 
}p[N];
int n;//�ɻ��� 
bool flag[N];//������� 
bool dfs(int step,int last){//��Ҫ���ŵ���һ�ܷɻ� ��һ�ҽ��������ʱ�� 
	//���� 
	if(step==n+1)
		return true;
	//�������п���
	for(int i = 1;i<=n;i++){
		//�жϿ��� ����ʱ��+����ʱ��>=����ʱ�� ����û�б����Ź� 
		if(p[i].t+p[i].d>=last&&!flag[i]) {
			//���
			flag[i] = true;
			if(dfs(step+1,max(last,p[i].t)+p[i].l))
				return true;
			//�ָ��ֳ�
			flag[i] = false; 
		}
	} 
	return false; 
}
int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i = 1;i<=n;i++){
			cin>>p[i].t>>p[i].d>>p[i].l;
			
		}
		memset(flag,0,sizeof flag);
		if(dfs(1,0))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0; 
} 
