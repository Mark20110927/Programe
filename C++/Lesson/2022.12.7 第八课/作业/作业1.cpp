#include<iostream>
using namespace std;
int main(){
	int n,m,i;
	cout<<"��������������"<<endl;
	cin>>n>>m;
	i = m>n?n:m;
	while(i>=1){
		if(m%i==0&&n%i==0){
			break;
		}
		i--; 
	}
	cout<<"��������������������"<<i<<endl;
	return 0; 
} 
