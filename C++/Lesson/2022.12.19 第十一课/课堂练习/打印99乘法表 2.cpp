#include<iostream>
#include<iomanip>
using namespace std;
//打印99乘法表 2
int main(){
	//第一行
	cout<<"  1";
	for(int i = 2;i<=9;i++){
		cout<<setw(5)<<i;
	} 
	cout<<endl;
	//第二行
	cout<<"  -";
	for(int i = 2;i<=9;i++){
		cout<<setw(5)<<'-';
	} 
	cout<<endl;
	//后九行
	for(int i = 1;i<=9;i++){
		cout<<i<<"|"<<i;
		for(int j = 2;j<=i;j++){
			cout<<setw(5)<<i*j;
		}
		cout<<endl;
	} 
	return 0; 
} 
