#include<iostream>
using namespace std;
//���ַ�ת 
int main(){
	int n;
	cin>>n;
	int m;
	while(n!=0){
		m = m*10+n%10;
		n/=10;
	}
	cout<<m<<endl;
	return 0; 
} 
