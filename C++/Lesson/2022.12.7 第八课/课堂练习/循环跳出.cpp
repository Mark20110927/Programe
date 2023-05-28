#include<iostream>
using namespace std;
//循环跳出 
int main(){
	//break 跳出当重循环 
	for(int i = 1;i<=100;i++){
		if(i == 50){
			break;
		}
		cout<<i<<"  ";
	} 
	
		//break 跳出当重循环 
	for(int i = 1;i<=100;i++){
		if(i == 50){
			continue;
		}
		cout<<i<<"  ";
	} 
	return 0; 
} 
