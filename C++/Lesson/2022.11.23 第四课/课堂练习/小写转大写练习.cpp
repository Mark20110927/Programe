#include<iostream>
using namespace std;
//输入一个小写字母，输出对应的大写字母 
int main(){
	//输入
	char c;
	cin>>c;
	//小写转大写
	c-= 32;
	//输出
	cout<<c<<endl; 
	return 0; 
} 
