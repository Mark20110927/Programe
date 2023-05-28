#include<bits/stdc++.h>
using namespace std;
//ÇàÍÜÌøÌ¨½× 
int frog(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return frog(n-1)+frog(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<frog(n)<<endl; 
	return 0; 
} 
