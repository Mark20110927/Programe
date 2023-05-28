#include<iostream>
using namespace std;
//期末买笔  4,5,6 
int main(){
	int x,yu,a = 0,b = 0,c = 0;//a 4,b 5,c 6 
	cin>>x;
	yu = x%4;
	switch(yu){
		case 0:
			a = x/4;
			break;
		case 1:
			b = 1;
			a = (x - 5)/4;
			break;
		case 2:
			c = 1;
			a = (x - 6)/4;
			break;
		case 3:
			b = 1;
			c = 1;
			a = (x - 5 - 6)/4;
			break;
		
	}
	cout<<"四元："<<a<<"个"<<endl; 
	cout<<"五元："<<b<<"个"<<endl;
	cout<<"六元："<<c<<"个"<<endl;
	return 0;
} 
