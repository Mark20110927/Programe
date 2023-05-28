#include<bits/stdc++.h>
using namespace std;
//二维数组的基本练习 
int main(){
	//定义和初始化 
	int a[2][3];
	int b[2][3] = {1,2,3,4,5,6};
	int c[2][3] = {{1,2},{3,4}};
	int d[][3] = {1,2,3,4,5,6};
	//输出
	cout<<"a"<<endl; 
	for(int i = 0;i<=1;i++){
		for(int j = 0;j<=2;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	} 
	cout<<"b"<<endl;
	for(int i = 0;i<=1;i++){
		for(int j = 0;j<=2;j++){
			cout<<b[i][j]<<"  ";
		}
		cout<<endl;
	} 
	cout<<"c"<<endl;
	for(int i = 0;i<=1;i++){
		for(int j = 0;j<=2;j++){
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	} 
	cout<<"d"<<endl;
	for(int i = 0;i<=1;i++){
		for(int j = 0;j<=2;j++){
			cout<<d[i][j]<<"  ";
		}
		cout<<endl;
	} 
	return 0;
} 
