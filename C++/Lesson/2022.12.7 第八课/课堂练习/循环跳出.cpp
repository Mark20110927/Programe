#include<iostream>
using namespace std;
//ѭ������ 
int main(){
	//break ��������ѭ�� 
	for(int i = 1;i<=100;i++){
		if(i == 50){
			break;
		}
		cout<<i<<"  ";
	} 
	
		//break ��������ѭ�� 
	for(int i = 1;i<=100;i++){
		if(i == 50){
			continue;
		}
		cout<<i<<"  ";
	} 
	return 0; 
} 
