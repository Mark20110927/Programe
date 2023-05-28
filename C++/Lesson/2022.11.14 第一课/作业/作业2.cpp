#include <iostream>
using namespace std;
int main(){
	int a,b,imp;
	a = 10; 
	b = 20;
	cout<<"a="<<a<<"  "<<"b="<<b<<endl;
	imp = a;
	a = b;
	b = imp;
	cout<<"a="<<a<<"  "<<"b="<<b<<endl;
	return 0;
}
