#include<iostream>
using namespace std;
//ѭ������������� 
int main(){
	while(true){
		int m,n;
		cin>>m>>n;
		int gcd;//gcd����������� ͬʱҲ��ѭ������ 
		gcd = m>n?n:m;
		while(gcd>=1){
		if(m%gcd==0&&n%gcd==0){
			break;
		}
		gcd--;
	} 
	cout<<gcd<<endl;
	}
	return 0; 
} 
