#include<bits/stdc++.h>
using namespace std;
//交换值传递 
void swapf(int x,int y){
	int t = x;
	x = y;
	y = t;
} 
int main(){
	int a = 1,b = 2;
	cout<<"交换前：a="<<a<<" b="<<b<<endl;
	swapf(a,b); 
	cout<<"交换后：a="<<a<<" b="<<b<<endl;
	return 0; 
} 
