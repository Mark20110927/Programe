#include<iostream>
using namespace std;
int main(){
	int x = 0,y = 0,z = 0;
	do{
		z++;
		y+=z;
		x++;
	}while(y<1000); 
	cout<<x<<endl;
	return 0; 
} 
