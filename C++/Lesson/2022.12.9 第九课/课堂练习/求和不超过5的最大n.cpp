#include<iostream>
using namespace std;
//��Ͳ�����5�����n 
int main(){
	float i = 0,s = 0;
	while(s<5){
		i++;
		s+=1/i;
	}
	cout<<i;
	return 0; 
} 
