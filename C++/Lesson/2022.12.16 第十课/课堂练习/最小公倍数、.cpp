#include<iostream>
using namespace std;
//��С������ 
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
	cout<<"��С��������"<<lcm<<endl; 
	return 0; 
} 
