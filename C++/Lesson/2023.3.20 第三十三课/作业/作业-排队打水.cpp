#include<bits/stdc++.h>
using namespace std;
//��ҵ-�ŶӴ�ˮ
const int N = 1e5+10;
int tx[N];
long long lt[N];
long long timef; 
int main(){
	int n,r;
	cin>>n>>r;
	for(int i = 1;i<=n;i++)
		cin>>tx[i];
	//̰�ĵ�һ������ʱ���ٵ����ȴ� 
	sort(tx+1,tx+1+n);
	//̰�ĵڶ���������̵�ˮ��ͷ
	for(int i = 1;i<=n;i++){
		int min = 1;
		for(int j = 1;j<=r;j++){
			if(lt[j]<lt[min])
				min = j;
		}
		timef+=lt[min];
		lt[min]+=tx[i];
	}
	cout<<1.0*timef/n;
	return 0; 
} 
