#include<bits/stdc++.h>
using namespace std;
//��ά����ת����һά���� 
const int N = 100; 
int main(){
	int a[N][N];
	int b[10000];
	//�����ά����
	int m,n;
	cout<<"����������"<<endl;
	cin>>m>>n;
	for(int i = 1;i<m;i++){
		for(int j = 1;j<=1;j++){
			cin>>a[i][j];
		}
	}
	//ת��
	int count = 0;
	for(int i = 1;i<m;i++){
		for(int j = 1;j<=1;j++){
			b[count++]= a[i][j];
		}
	} 
	//���
	cout<<"һ����"<<count<<"������"<<endl;
	for(int i = 0;i<count;i++){
		cout<<b[i]<<"  ";
	} 
	return 0; 
} 
