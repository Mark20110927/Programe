#include<bits/stdc++.h>
using namespace std;
//���ֲ������ظ�Ԫ�� 
const int N = 1e6+10;
int a[N]; 
int main(){
	int n,m;
	cin>>n>>m;
	//����n����
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	//����m��ѯ��
	int x,l,r,mid;	
	while(m--){
		cin>>x;
		//������ģ��
		l = 1,r = n;
		while(l<r){
			mid = l+r>>1;
			if(a[mid]>=x) r = mid;
			else l = mid+1;
		}
		//������l==r==mid
		if(a[l]==x)
			cout<<l<<' ';
		else 
			cout<<"-1"<<' '; 
	} 
	return 0; 
}
