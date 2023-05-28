#include<iostream>
using namespace std;
int main(){
	int n[20] = {};
	for(int x = 1;x<=20;x++){
		n[x] = x*100;
		cout<<"第"<<x<<"个员工的工资是"<<n[x]<<"元。"<<endl;
	} 
	return 0; 
} 
