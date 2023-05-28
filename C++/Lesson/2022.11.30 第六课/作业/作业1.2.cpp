#include<iostream>
using namespace std;
int main(){
	cout<<"ÇëÊäÈëÄúµÄ³É¼¨£¡"<<endl;
	int a;
	cin>>a;
	if(a>90&&a<=100) {
		cout<<"A"<<endl;
	}
	if(a>80&&a<=90){
		cout<<"B"<<endl;
	}
	if(a>70&&a<=80){
		cout<<"C"<<endl;
	}
	if(a>60&&a<=70){
		cout<<"D"<<endl;
	}
	if(a<60) {
		cout<<"F"<<endl;
	}
	return 0; 
} 
