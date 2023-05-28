#include<bits/stdc++.h>
using namespace std;
//打印n层正方形 覆盖 
int main(){
	int a[100][100];
	int n;
	cin>>n;
	for(int k = 1;k<=n;k++){
		for(int i = k;i<=2*n-k;i++){
			for(int j = k;j<=2*n-k;j++){
				a[i][j] = k;
			}
		}
	} 
	for(int i = 1;i<=2*n-1;i++){
		for(int j = 1;j<=2*n-1;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0; 
} 
