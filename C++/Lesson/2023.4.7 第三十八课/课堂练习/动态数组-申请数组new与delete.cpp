#include<bits/stdc++.h>
using namespace std;
//ÉêÇëÊý×énewÓëdelete 
int main(){
	int n;
	cin>>n;
	int *p = new int[n]();
	for(int i = 0;i<n;i++){
		cout<<p[i]<<endl;
	} 
	delete []p;
	return 0; 
} 
