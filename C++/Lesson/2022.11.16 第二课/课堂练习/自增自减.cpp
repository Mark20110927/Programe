#include<iostream>
using namespace std;
int main(){
	int a = 2,b = 3,c,d;
	c = a++;
	cout<<c<<" "<<a<<endl;
	d = ++a;
	cout<<d<<" "<<a<<endl;
	return 0;
} 
