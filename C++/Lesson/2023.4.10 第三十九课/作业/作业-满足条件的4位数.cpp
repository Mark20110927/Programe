#include<bits/stdc++.h>
using namespace std;
//作业-满足条件的4位数 
int p[120][5];
int main(){
	int n,res = 0;
	cin>>n;
	for(int i = 0;i<n;i++){
		string s1;
		cin>>s1;
		int g = s1[3]-'0',s = s1[2]-'0',b = s1[1]-'0',q = s1[0]-'0';
		if(g-q-b-s>0){
			res++;
		}
	} 
	cout<<res;
	return 0; 
} 
