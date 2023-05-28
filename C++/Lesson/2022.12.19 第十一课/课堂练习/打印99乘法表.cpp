#include<iostream>
#include<iomanip>
using namespace std;
//¥Ú”°99≥À∑®±Ì 
int main(){
	for(int i = 1;i<=9;i++){
		for(int j = 1;j<=i;j++){
			cout<<i<<"*"<<j<<"="<<setw(2)<<i*j<<" ";
		}
		cout<<endl;
	} 
	return 0; 
} 
