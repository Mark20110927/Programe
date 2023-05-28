#include<bits/stdc++.h>
using namespace std;
//二维数组转化成一维数组 
const int N = 100; 
int main(){
	int a[N][N];
	int b[10000];
	//输入二维数组
	int m,n;
	cout<<"请输入行列"<<endl;
	cin>>m>>n;
	for(int i = 1;i<m;i++){
		for(int j = 1;j<=1;j++){
			cin>>a[i][j];
		}
	}
	//转化
	int count = 0;
	for(int i = 1;i<m;i++){
		for(int j = 1;j<=1;j++){
			b[count++]= a[i][j];
		}
	} 
	//输出
	cout<<"一共有"<<count<<"个数字"<<endl;
	for(int i = 0;i<count;i++){
		cout<<b[i]<<"  ";
	} 
	return 0; 
} 
