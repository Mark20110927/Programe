#include<iostream>
using namespace std;
//最小公倍数 
int main(){
	int m,n,lcm;
	cin>>n>>m;
	if(m<n){
		int temp = m;
		m = n;
		n = temp;
	} 
	for(int i = m;;i+=m){
		if(i%n ==0){
			lcm = i;
			break;
		}
		
	}
	cout<<"最小公倍数是"<<lcm<<endl; 
	return 0; 
} 
