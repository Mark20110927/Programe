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
	cout<<"��������"<<ji<<endl;
	cout<<"ż������"<<ou<<endl;
	return 0; 
} 
