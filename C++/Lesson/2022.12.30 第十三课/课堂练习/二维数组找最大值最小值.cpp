#include<bits/stdc++.h>
using namespace std;
//��ά���������ֵ��Сֵ 
const int N = 100; 
int main(){
    _setmode(_fileno(stdout), _O_U16TEXT); // �ص�
    _setmode(_fileno(stdin), _O_U16TEXT);  // �ص�
    int a[N][N];
	int m,n;
	cout<<"��������"<<endl;
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
	cout<<"���ֵ��"<<maxn<<endl;
	cout<<"��Сֵ��"<<minn<<endl; 
	return 0; 
} 
