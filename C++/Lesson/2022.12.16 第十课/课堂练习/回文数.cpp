#include<iostream>
using namespace std;
//回文数 
int main(){
	//颠倒数字 
	int n;
	cin>>n;
	int n0 = n;
	int m = 0;
	while(n>0){
		m = m*10 + n%10;
		n /= m;
	} 
	if(m ==n0)
		cout<<"是回文数"<<endl;
	else
		cout<<"不是回文数"<<endl;
	return 0; 
} 
