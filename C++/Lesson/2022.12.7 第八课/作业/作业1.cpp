#include<iostream>
using namespace std;
int main(){
	int n,m,i;
	cout<<"请输入两个数！"<<endl;
	cin>>n>>m;
	i = m>n?n:m;
	while(i>=1){
		if(m%i==0&&n%i==0){
			break;
		}
		i--; 
	}
	cout<<"这两个数的做大公因数是"<<i<<endl;
	return 0; 
} 
