#include<bits/stdc++.h>
using namespace std;
//作业-苹果和虫子 
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	int eat = y/x;
	if(y-eat!=0)
		eat++;
	int lest;
	lest = n-eat;
	cout<<lest;
	return 0; 
} 
