#include<bits/stdc++.h>
using namespace std;
//作业-余数相同问题 
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	for(int i = 2;i<=1000000;i++){
		int fa = a%i,fb = b%i,fc = c%i;
		if(fa==fb&&fb==fc&&fa==fc){
			cout<<i<<endl;
			return 0;
		}
	}
	return 0; 
} 
