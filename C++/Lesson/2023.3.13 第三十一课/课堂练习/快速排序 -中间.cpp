#include<bits/stdc++.h>
using namespace std;
//�������� -�м� 
const int N  = 1e5+10;
int a[N];
void quick_sort(int l,int r){
	//����
	if(l>=r)
		return; 
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
	quick_sort(l,j);
	quick_sort(j+1,r);
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	quick_sort(1,n);
	for(int i = 1;i<=n;i++)
		cout<<a[i]<<' ';
	return 0; 
} 
