#include<bits/stdc++.h>
using namespace std;
//��ҵ_�鲢����-merge_sort 
const int N = 1000;
int a[N],tmp[N];
void merge_sort(int l,int r){
	//���� 
	if(l>=r)
		return;
	//ѡ�ֽ��
	int mid = l+r>>1;
	//�ݹ����������� 
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	//�鲢 
	int i = l,j = mid+1,k = 0; 
	//���Ҷ�ʣ 
	while(i<=mid&&j<=r){
		if(a[i]<a[j])
			tmp[k++] = a[i++];
		else
			tmp[k++] = a[j++];
	}
	//ɨβ 
	while(i<=mid)
		tmp[k++] = a[i++];
	while(j<=r)
		tmp[k++] = a[j++];
	//���ƻ�ԭ���� 
	for(i = l,j = 0;i<=r,j<=k-1;i++,j++)
		a[i] = tmp[j];
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	merge_sort(1,n);
	for(int i = 1;i<=n;i++)
		cout<<a[i]<<' ';
	return 0; 
} 
