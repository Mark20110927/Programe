#include<bits/stdc++.h>
using namespace std;
//·É»ú½µÂä 
int n,t; 
struct Plane{
	int dt;
	int pt;
	int jt;
	int wt;
	int group;
};
queue<Plane> q;
Plane plane[20][20];
bool ans[20];
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>t;
		for(int j = 1;j<=n;j++){
			cin>>plane[i][j].d>>plane[i][j].pt>>plane[i][j].jt;
			plane[i][j].wt = plane[i][j].dt+plane[i][j].pt;
		}
		
	}
	return 0; 
} 
