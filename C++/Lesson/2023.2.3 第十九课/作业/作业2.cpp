#include<bits/stdc++.h>
using namespace std;
int num = 1;
int hnt(char a,char b,char c,int n){
	if(n==1)
		return 1;
	hnt(a,c,b,n-1);
	num++;
	hnt(b,a,c,n-1);
	num++;
}
int main(){
	int n;
	cin>>n;
	cout<<hnt('A','B','C',n);
	return 0; 
} 
