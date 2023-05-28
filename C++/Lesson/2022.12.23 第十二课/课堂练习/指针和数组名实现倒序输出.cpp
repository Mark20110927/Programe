#include<bits/stdc++.h>
using namespace std;
//指针和数组名实现倒序输出 
int main(){
	int a[]={1,2,3,4,5,6};
	//数组名
	for(int i = 5;i>=0;i--){
		cout<<a[i]<<"  ";
	} 
	cout<<endl;
	//指针
	int *p = &a[5];
	while(p>=a) {
		cout<<*p<<"  ";
		p--;
	}
	cout<<endl;
	return 0; 
} 
