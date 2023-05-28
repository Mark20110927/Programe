#include<iostream>
using namespace std;
// 循环变量作用域 
int main(){
	int i;
	for(i = 2;i<=100;i+=2) {
		cout<<i<<"  "<<endl; 
	}
	cout<<i;
	return 0; 
} 
