#include<iostream>
using namespace std;
//switch�����ϰ 
int main(){
	int a;
	cin>>a;
	switch(a){
		case 1:
			cout<<"����case1"<<endl;break;
		case 2:
			cout<<"����case2"<<endl;break;
		default: 
			cout<<"����default"<<endl; 
	} 
	char c = 'A';
	switch(c){
		case 'A':
			cout<<"����A"<<endl;break;
		case 'B':
			cout<<"����B"<<endl;break;
		default: 
			cout<<"����default"<<endl; 
	} 
	return 0; 
} 
