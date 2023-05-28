#include<iostream>
using namespace std;
//循环法求最大公因数 
int main(){
	while(true){
		int m,n;
		cin>>m>>n;
		int gcd;//gcd代表最大公因数 同时也是循环变量 
		gcd = m>n?n:m;
		while(gcd>=1){
		if(m%gcd==0&&n%gcd==0){
			break;
		}
		gcd--;
	} 
	cout<<gcd<<endl;
	}
	return 0; 
} 
