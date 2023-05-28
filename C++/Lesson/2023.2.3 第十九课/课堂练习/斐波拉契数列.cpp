#include<bits/stdc++.h>
using namespace std;
//ì³²¨À­ÆõÊýÁÐ 
int fi(int n){
	if(n==1||n==0){
		return 1;
	}
	return fi(n-1)+fi(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fi(n)<<endl; 
	return 0; 
} 
