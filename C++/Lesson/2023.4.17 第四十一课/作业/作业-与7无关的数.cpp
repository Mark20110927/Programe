#include<bits/stdc++.h>
using namespace std;
//作业-与7无关的数 
bool fenli(int x){
	int n = x;
	if(n%7==0)
		return true;
	while(n%10!=0){
		if(n!=x){
			if(n%10==7)
				return true;
		}
		n/=10;
	} 
	return false;
}
int main(){
	int n;
	cin>>n;
	int res = 0;
	for(int i = 1;i<n;i++){
		if(!fenli(i))
			res+=i*i;
	} 
	cout<<res;
	return 0; 
} 
