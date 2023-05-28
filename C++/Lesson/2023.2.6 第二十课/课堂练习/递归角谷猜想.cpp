#include<bits/stdc++.h>
using namespace std;
//µİ¹é½Ç¹È²ÂÏë
void jiaogu(int n){
	if(n==1)
		return;
	if(n%2==1){
		cout<<"    "<<n<<"¡Á3+1="<<n*3+1<<endl; 
		jiaogu(3*n+1);
	}
	else{
		if(n%2==0){
		cout<<"    "<<n<<"¡Â2="<<n/2<<endl; 
		jiaogu(n/2);
	}
	}
}
int main(){
	int n;
	cin>>n;
	jiaogu(n);
	return 0; 
} 
