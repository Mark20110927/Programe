#include<bits/stdc++.h>
using namespace std;
//Ñî»ÔÈý½Ç 
const int N = 100;
int a[N][N];
int main(){
	//³õÊ¼»¯
	a[1][1] = 1;
	int n;
	cin>>n;
	for(int i = 2;i<=n;i++){
		for(int j = 1;j<=i;j++){
			a[i][j] = a[i-1][j]+a[i-1][j-1];
		}
	} 
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
	return 0; 
} 
