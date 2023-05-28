#include<bits/stdc++.h>
using namespace std;
//模拟位置 
int main(){
	int a[10];
	for(int i = 1;i<=5;i++){
		a[i] = i;
	} 
	for(int i = 1;i<=10;i++){
		//输出位置
		cout<<setw(2)<<i<<':';
		for(int j = 1;j<=5;j++){
			cout<<setw(4)<<a[j];
		} 
		cout<<endl;
		//变换位置
		for(int j = 1;j<=5;j++){
			a[j-1]=a[j];
		} 
		a[5]=a[0];
		
	}
	return 0; 
} 
