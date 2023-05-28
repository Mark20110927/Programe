#include<bits/stdc++.h>
using namespace std;
//二维数组按列遍历 
const int N = 100; 
int main(){
	int a[N][N];
	int m,n;
	cout<<"输入行列"<<endl;
	cin>>m>>n;
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	//按列遍历求和
	int sum;
	for(int j = 1;j<=n;j++) {
		sum = 0;
		for(int i = 1;i<=m;i++){
			sum+=a[i][j];
		}
		cout<<sum<<"  ";
	}
	return 0; 
} 
