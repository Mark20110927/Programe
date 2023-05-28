#include<bits/stdc++.h>
using namespace std;
//���ִ��_��·��ѹ�� 
const int  N = 1e5;
int pre[N];
//��x�ĸ��ڵ� 
int find(int x){
	if(pre[x]==x)
		return x;
	return pre[x] = find(pre[x]);
}
//�ϲ�x��y���ڵļ���
void join(int x,int y){
	int fx = find(x),fy = find(y);
	if(fx!=fy)
		pre[fx]=fy;
} 
int main(){
	int  n;
	cin>>n;
	//��ʼ��
	for(int i = 1;i<=n;i++){
		pre[i] = i;
	} 
	cout<<"���ڵ�"<<endl;
	for(int i = 1;i<=n;i++){
		cout<<find(i)<<endl;
	} 
	cout<<"��һ���ڵ�"<<endl; 
	for(int i = 1;i<=n;i++){
		cout<<pre[i]<<endl;
	} 
	for(int i = 1;i<=n-1;i++){
		join(i,i+1);
	} 
	
	cout<<"���ڵ�"<<endl;
	for(int i = 1;i<=n;i++){
		cout<<find(i)<<endl;
	} 
	cout<<"��һ���ڵ�"<<endl; 
	for(int i = 1;i<=n;i++){
		cout<<pre[i]<<endl;
	}  
	return 0; 
} 
