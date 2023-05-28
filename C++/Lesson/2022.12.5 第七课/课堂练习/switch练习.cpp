#include<iostream>
using namespace std;
//switch语句练习 
int main(){
	int a;
	cin>>a;
	switch(a){
		case 1:
			cout<<"我是case1"<<endl;break;
		case 2:
			cout<<"我是case2"<<endl;break;
		default: 
			cout<<"我是default"<<endl; 
	} 
	char c = 'A';
	switch(c){
		case 'A':
			cout<<"我是A"<<endl;break;
		case 'B':
			cout<<"我是B"<<endl;break;
		default: 
			cout<<"我是default"<<endl; 
	} 
	return 0; 
} 
