#include<bits/stdc++.h>
using namespace std;
//背包问题
const int N = 1e3+10;
int f[N][N];//背包状态数组 f[i][j]代表 氧气最低限度为i 燃料最低限度为j时的最低重量
const int INF = 0x3f3f3f3f; 
int main(){
	memset(f,0x3f,sizeof(f));
	f[0][0]=0;
	int m,n,k;
	cin>>m>>n>>k;
	int a,b,c;
	while(k--){
		cin>>a>>b>>c;
		for(int i = m;i>=0;i--){
			for(int j = n;j>=0;j--){
				if(f[i][j]>c+f[max(0,i-a)][max(0,j-b)])
					f[i][j] = c+f[max(0,i-a)][max(0,j-b)]; 
			}
		}
	}
	cout<<f[m][n];
	return 0; 
} 
