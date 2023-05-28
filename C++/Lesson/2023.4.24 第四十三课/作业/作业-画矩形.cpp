#include<bits/stdc++.h>
using namespace std;
//×÷Òµ-»­¾ØÐÎ 
int n,m;
char c;
bool flag;
bool mapf[100][100]; 
int main(){
	cin>>n>>m>>c>>flag;
	if(flag){
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=m;j++){
				mapf[i][j] = true;
			}
		}
	}
	else{
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=m;j++){
				if(j==1||j==m||i==1||i==n){
					mapf[i][j] = true;
					continue;
				}
			}
		}
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(mapf[i][j]){
				cout<<c;
			}
			else{
				cout<<' ';
			}
		}
		cout<<endl;
	}
	return 0; 
} 
