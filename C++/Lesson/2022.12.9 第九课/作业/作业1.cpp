#include<iostream>
using namespace std;
int main(){
	int m,n,x;
	cout<<"��������������"<<endl; 
	cin>>m>>n;
	x = m%n;
	while(x!=0){
		m = n;
		n = x;
		x = m%n;
	} 
	cout<<"�������������������"<<n<<endl;
	return 0; 
} 
