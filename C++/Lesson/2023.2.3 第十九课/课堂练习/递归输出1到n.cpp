#include<bits/stdc++.h>
using namespace std;
//�ݹ����1��n 
void f(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	cout<<n<<" ";
	f(n-1);
}
void ff(int n){
	if(n==1){
		cout<<1<<" ";
		return;
	}
	ff(n-1);
	cout<<n<<" ";
}
int main(){
//	f(100);
	ff(100);
	return 0; 
} 
