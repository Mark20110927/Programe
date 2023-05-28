#include<bits/stdc++.h>
using namespace std;
//作业-整数的个数 
const int  N = 1e4;
int num[N];
int main(){
	int k;
	cin>>k;
	int res1 = 0,res5 = 0,res10 = 0;
	for(int i = 1;i<=k;i++){
		cin>>num[i];
		if(num[i]==1)
			res1++;
		if(num[i]==5)
			res5++;
		if(num[i]==10)
			res10++;
	}
	printf("%d\n%d\n%d\n",res1,res5,res10);
	return 0; 
} 
