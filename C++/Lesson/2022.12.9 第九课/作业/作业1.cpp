#include<iostream>
using namespace std;
int main(){
	int m,n,x;
	cout<<"请输入两个数！"<<endl; 
	cin>>m>>n;
	x = m%n;
	while(x!=0){
		m = n;
		n = x;
		x = m%n;
	} 
	cout<<"这两个数的最大公因数是"<<n<<endl;
	return 0; 
} 
