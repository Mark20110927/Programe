#include<bits/stdc++.h>
using namespace std;
//��ҵ-����ѡ���㷨 
const int N  = 1e5+10;
int a[N];
int quick_select(int l,int r,int k){
	//����
	if(l>=r)
		return a[l];
	//�ֽ�
	int mid = a[l+r>>1];
	//���� ���<=�ֽ� �����>=�ֽ�  �ұ�>=�ֽ� ��<=�ֽ�
	int i = l-1,j = r+1;
	while(i<j){
		while(a[++i]<mid);
		while(a[--j]>mid);
		if(i<j)
			swap(a[i],a[j]);
	}
	//�ݹ��������� ͣ������ʱ��i==j/j+1==i 
	//�ж�����߻������ұ� �����j-l+1���� ���l,j �ұ�j+1,r
	if(j-l+1>=k)
		return quick_select(l,j,k);
	else
		return quick_select(j+1,r,k-(j-l+1)); 
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	cout<<quick_select(1,n,k);
	return 0; 
} 
