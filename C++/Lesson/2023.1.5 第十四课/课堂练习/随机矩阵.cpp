#include<bits/stdc++.h>
using namespace std;
//随机矩阵 
const int N = 1e3;
int a[N][N]; 
int main(){
	cout<<"请输入矩阵的行和列！"<<endl;
	int m,n;
	cin>>m>>n;
	srand(time(0));
	for(int i = 1;i<=m;i++){
		for(int j = 1;j <= n;j++){
			a[i][j] = rand()%10;
		}
	} 
	for(int i = 1;i<=m;i++){
		for(int j = 1;j <= n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0; 
} 
