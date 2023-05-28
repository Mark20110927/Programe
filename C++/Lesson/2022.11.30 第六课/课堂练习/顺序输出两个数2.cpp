#include<iostream>
using namespace std;
//顺序输出两个数 2
int main(){
	int a,b;
	cin>>a>>b;
	if(a<b){
		cout<<b<<" "<<a;
	} 
	if(a>=b){
		cout<<a<<" "<<b;
	}
	return 0; 
} 
