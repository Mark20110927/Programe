#include<bits/stdc++.h>
using namespace std;
//����ָ�봫�� 
void swapf(int *x,int *y){
	int t = *x;
	*x = *y;
	*y = t;
} 
int main(){
	int a = 1,b = 2;
	cout<<"����ǰ��a="<<a<<" b="<<b<<endl;
	swapf(&a,&b); 
	cout<<"������a="<<a<<" b="<<b<<endl;
	return 0; 
} 
