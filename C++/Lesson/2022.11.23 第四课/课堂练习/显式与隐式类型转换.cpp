#include<iostream>
using namespace std;
int main(){
	//隐式类型转换 
	int c = 'A';
	char b = 65;
	cout<<c<<endl<<b<<endl;
	//显式类型转换
	cout<<int('a')<<endl;
	cout<<char(49)<<endl; 
	return 0; 
} 
