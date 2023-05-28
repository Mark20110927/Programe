#include<bits/stdc++.h>
using namespace std;
//Êý×ÖÍ³¼Æ 
int sum = 0;
int tj(int x){
	int n = 0;
	int r;
	while(x!=0){
		r = x%10;
		if(r==2)
			n++;
		x/=10;
	}
	return n;
} 
int main(){
	int l,r;
	cin>>l>>r;
	for(int i = l;i<=r;i++){
		sum+=tj(i);
	}
	cout<<sum;
	return 0; 
} 
