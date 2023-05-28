#include<bits/stdc++.h>
using namespace std;
//作业-机甲战士
const int N = 1e3+10;
int bag[N][N];
const int INF = 0x3f3f3f3f;
void fuzhi(){
	for(int i = 0;i<=N;i++){
		for(int j = 0;j<=N;j++){
			bag[i][j] = INF;
		}
	}
}
int main(){
	fuzhi();
	bag[0][0] = 0;
	int m,n,k;
	cin>>m>>n>>k;
	int a,b,c;
	while(k--){
		cin>>a>>b>>c;
		for(int i = m;i>=0;i--){
			for(int j = n;j>=0;j--){
				if(bag[i][j]>c+bag[max(0,i-a)][max(0,j-b)])
					bag[i][j] = c+bag[max(0,i-a)][max(0,j-b)]; 
			}
		}
	}
	cout<<bag[m][n];
	return 0; 
} 
