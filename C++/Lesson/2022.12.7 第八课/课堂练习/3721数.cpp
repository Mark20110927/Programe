#include<iostream>
using namespace std;
//3721数  除以三余一除以七余一 
int main(){
	for(int i = 1;i<=200;i++) {
		if(i%3==2&&i%7==1) 
		cout<<i<<"  ";
	}
	cout<<endl;
	return 0; 
} 
