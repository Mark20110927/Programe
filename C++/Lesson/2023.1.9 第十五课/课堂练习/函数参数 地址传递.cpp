#include<bits/stdc++.h>
using namespace std;
//�������� ��ַ���� 
void swapf(int * x,int * y){
	int tmp = * x;
	* x = * y;
	* y = tmp;
} 
int main(){
	int x,y;
	x = 1;
	y = 2;
	swapf(&x,&y);
	cout<<x<<endl;
	cout<<y<<endl;
	return 0; 
} 
