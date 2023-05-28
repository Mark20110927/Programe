#include<bits/stdc++.h>
using namespace std;
//矩阵相乘 
const int N = 1e3;
int a[N][N]; 
int b[N][N]; 
int c[N][N]; 
int main(){
	cout<<"请输入第一个矩阵的行,第一个矩阵的列和第二个矩阵的行,第二个矩阵的列！"<<endl;
	int x,y,z;
	cin>>x>>y>>z;
	srand(time(0));
	//第一个矩阵x*y 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j <= y;j++){
			a[i][j] = rand()%10;
		}
	} 
	//第二个矩阵x*y 
	for(int i = 1;i<=y;i++){
		for(int j = 1;j <= z;j++){
			b[i][j] = rand()%10;
		}
	} 
	//输出第一个矩阵
	cout<<"第一个矩阵为:"<<endl; 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j <= y;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	//输出第二个矩阵
	cout<<"第二个矩阵为:"<<endl; 
	for(int i = 1;i<=y;i++){
		for(int j = 1;j <= z;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	} 
	//矩阵相乘 结果是x*z 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j<=z;j++){
			for(int k = 1;k<=y;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	//输出结果矩阵
	cout<<"结果矩阵为:"<<endl; 
	for(int i = 1;i<=x;i++){
		for(int j = 1;j<=z;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0; 
} 
