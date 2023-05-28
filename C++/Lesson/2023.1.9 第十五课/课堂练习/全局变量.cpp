#include<bits/stdc++.h>
using namespace std;
//全局变量 
int x,y; 
void swapf(){
	int tmp = x;
	x = y;
	y = tmp;
} 
int main(){
	x = 1;
	y = 2;
	swapf();
	cout<<x<<endl;
	cout<<y<<endl;
	return 0; 
} 
