#include<iostream>
using namespace std;
//������������ 
int main(){
	int m,n,sum = 0,count = 0;
	cout<<"������������"<<endl;
	cin>>m>>n;
	if(m>n){
		int tmp = m;
		m = n;
		n = tmp;
	}	
	for(int i = m;i<=n;i++){
		if(i%17==0){
			sum+=i;
			count++;
		}
	}
	cout<<"��������������"<<count<<"��"<<endl;
	cout<<"���Ϊ"<<sum; 
	return 0; 
} 
