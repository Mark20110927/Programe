#include<bits/stdc++.h>
using namespace std;
//二维数组找最大值最小值 
const int N = 100; 
int main(){
    _setmode(_fileno(stdout), _O_U16TEXT); // 重点
    _setmode(_fileno(stdin), _O_U16TEXT);  // 重点
    int a[N][N];
	int m,n;
	cout<<"输入行列"<<endl;
	cin>>m>>n;
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int maxn = 0,minn = 999999999;
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			if(maxn <a[i][j]){
				maxn = a[i][j];
			}
			if(minn >a[i][j]){
				minn = a[i][j];
			}
		}
	}
	cout<<"最大值："<<maxn<<endl;
	cout<<"最小值："<<minn<<endl; 
	return 0; 
} 
