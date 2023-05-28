#include<bits/stdc++.h>
using namespace std;
int sum;
int mapf[500][500];
int r,c;
int d[4][4] = {{1,0},{-1,0},{0,-1},{0,1}};
int main(){
	cin >> r >> c;
	for(int i = 1;i <= r;i ++)
		for(int j = 1;j <= c;j ++)
			cin >> mapf[i][j];
	int x = 1,y = 1;
	while(true){
		sum += mapf[x][y];
		mapf[x][y] = 0;
		if(x == r && y == c) break;
		int maxf = 0,mx,my;
		for(int i = 0;i < 4;i ++){
		    int nx = x + d[i][0],ny = y + d[i][1];
		    if(mapf[nx][ny] > maxf){
		        maxf = mapf[nx][ny];
		        mx = nx;
		        my = ny;
		    }
		}
		x = mx;
		y = my;
	}
	cout << sum;
	return 0; 
} 
