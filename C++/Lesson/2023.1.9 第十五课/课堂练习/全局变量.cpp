#include<bits/stdc++.h>
using namespace std;
//ȫ�ֱ��� 
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
