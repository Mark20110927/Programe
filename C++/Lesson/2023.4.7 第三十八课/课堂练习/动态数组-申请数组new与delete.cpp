#include<bits/stdc++.h>
using namespace std;
//��������new��delete 
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
