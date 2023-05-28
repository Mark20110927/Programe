#include<bits/stdc++.h>
using namespace std;
//函数传参 引用传递 
void swapf(int &a,int &b){
	int tmp = a;
	a = b;
	b = tmp;
} 
int main(){
	int a = 1,b = 2;
	swapf(a,b);//int & a = a,int & b = b
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl; 
	return 0; 
} 
