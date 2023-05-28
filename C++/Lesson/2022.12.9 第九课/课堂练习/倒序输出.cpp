#include<iostream>
using namespace std;
// Êý×Öµ¹ÐòÊä³ö 
int main(){
	int n;
	cin>>n;
	while(n>0){
		if(n<10){
			cout<<n<<endl;
			n = 0;
		}
		else{
			cout<<n%10<<"  ";
			n/=10;
			
		}
	} 
	return 0; 
} 
