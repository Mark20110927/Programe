#include<bits/stdc++.h>
using namespace std;
//作业-数1的个数 
bool check(int x){
	if(x==1)
		return true;
	while(x!=0){
		int r = x%10;
		if(r==1)
			return true;
		x/=10;
	}
	return false;
}
int main(){
	int n,res = 1;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(check(i))
			res++;
	}
	cout<<res;
	return 0; 
} 
