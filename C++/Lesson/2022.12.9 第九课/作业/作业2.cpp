#include<iostream>
using namespace std;
int main(){
	float x = 0,y = 0;
	cout<<"������һ������"<<endl;
	cin>>y;
	while(x<=15){
		x++;
		y+=1/x;
	}
	cout<<y<<endl;
	return 0; 
} 
