#include<bits/stdc++.h>
using namespace std;
//×÷Òµ-Ç¦±ÊÕÒÁã2 
int qian[] = {100,50,20,10,5,1};
int shu[6] = {5,3,1,1,2,3}; 
bool zhao(int n){
	int tmp;
	for(int i  = 0;i<6;i++){
		tmp = min(n/qian[i],shu[i]);
		n-=tmp*qian[i];
	}
	return !n;
}
int main(){
	int money;
	cin>>money;
	if(zhao(money))
		cout<<"yes yeah!"<<endl;
	else
		cout<<"no no!"<<endl;
	return 0; 
} 
