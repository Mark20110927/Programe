#include<bits/stdc++.h>
using namespace std;
//��ҵ-ɾ������ 
const int N  = 1e3+10;
int a[N]; 
void deletef(int n){
	for(int i = n;i<=a[0];i++)
		a[i]= a[i+1];
	a[0]--;
	int j = 1;
	while(a[j]==0&&j<a[0])
		deletef(j);
}
int main(){
	string s;
	int n;
	cin>>s>>n;
	a[0] = s.size();
	for(int i = 0;i<s.size();i++)
		a[i+1] = s[i]-'0';
	if(a[0]<=n){
		cout<<0;
		return 0;
	}
	//�ҵ�һ�� ����ֵ���ֲ������ֵ��
	while(n--){
		for(int i = 1;i<=a[0];i++){
		if(a[i]>a[i+1]){
			deletef(i);
			break;
		}
		}
	}
	for(int i = 1;i<=a[0];i++)
		cout<<a[i]<<' ';
	return 0; 
} 
