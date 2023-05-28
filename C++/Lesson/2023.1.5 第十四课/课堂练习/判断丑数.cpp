#include<bits/stdc++.h>
using namespace std;
//判断丑数 
bool chou(int n){
	while(n%2==0) n/=2;
	while(n%3==0) n/=3;
	while(n%5==0) n/=5;
	if(n==1)
		return true;
	else
		return false;
} 
int main(){
	int num = 0;
	for(int i = 1;i<=100;i++){
		if(chou(i)){
			num++;
			cout<<setw(4)<<i; 
		} 
	}
	cout<<endl;
	cout<<"一共有丑数"<<num<<"个"<<endl;
	return 0; 
} 
