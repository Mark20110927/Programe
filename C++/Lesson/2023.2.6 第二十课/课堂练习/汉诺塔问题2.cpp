#include<bits/stdc++.h>
using namespace std;
//ººÅµËþÎÊÌâ2 
int hanoi(char a,char b,char c,int n){
	if(n==1)
		return 1;
	else 
		return hanoi(a,b,c,n-1)+1+hanoi(b,a,c,n-1);
} 
int main(){
	int n;
	cin>>n;
	cout<<hanoi('A','B','C',n)<<endl;
	return 0; 
} 
