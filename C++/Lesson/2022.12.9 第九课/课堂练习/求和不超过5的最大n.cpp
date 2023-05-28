#include<iostream>
using namespace std;
//求和不超过5的最大n 
int main(){
	float i = 0,s = 0;
	while(s<5){
		i++;
		s+=1/i;
	}
	cout<<i;
	return 0; 
} 
