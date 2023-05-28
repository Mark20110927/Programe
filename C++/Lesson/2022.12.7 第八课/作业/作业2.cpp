#include<iostream>
using namespace std;
int main(){
	int ji = 0,ou = 0,i,x;
	for(i=1;i<=100;i++){
		if(i%2==0)
			ji+=i;
	}
	for(x=1;x<=100;x++){
		if(x%2==1) 
			ou+=x;
	}
	cout<<"奇数和是"<<ji<<endl;
	cout<<"偶数和是"<<ou<<endl;
	return 0; 
} 
