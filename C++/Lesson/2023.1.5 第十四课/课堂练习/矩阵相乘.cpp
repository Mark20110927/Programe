#include<bits/stdc++.h>
using namespace std;
//������� 
const int N = 1e3;
int a[N][N]; 
int b[N][N]; 
int c[N][N]; 
int main(){
	cout<<"�������һ���������,��һ��������к͵ڶ����������,�ڶ���������У�"<<endl;
	int x,y,z;
	cin>>x>>y>>z;
	srand(time(0));
	//��һ������x*y 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j <= y;j++){
			a[i][j] = rand()%10;
		}
	} 
	//�ڶ�������x*y 
	for(int i = 1;i<=y;i++){
		for(int j = 1;j <= z;j++){
			b[i][j] = rand()%10;
		}
	} 
	//�����һ������
	cout<<"��һ������Ϊ:"<<endl; 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j <= y;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	//����ڶ�������
	cout<<"�ڶ�������Ϊ:"<<endl; 
	for(int i = 1;i<=y;i++){
		for(int j = 1;j <= z;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	} 
	//������� �����x*z 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j<=z;j++){
			for(int k = 1;k<=y;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	//����������
	cout<<"�������Ϊ:"<<endl; 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j<=z;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0; 
} 
