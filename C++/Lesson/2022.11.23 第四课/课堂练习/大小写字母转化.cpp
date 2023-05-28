#include<iostream>
using namespace std;
//大小写字母转化 
int main(){
	char a = 'A';
	cout<<char(a+1)<<endl;//打出B 
	//大写转小写 
	char b = 'A';
	cout<<char(b+32)<<endl;
	//小写转大写
	char c = 'a';
	cout<<char(c-32)<<endl; 
	cout<<char(c-32='a')<<endl; 
	return 0; 
} 
