#include<iostream>
using namespace std;
//满足条件的数 
int main(){
	int m,n,sum = 0,count = 0;
	cout<<"请输入两个数"<<endl;
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
	cout<<"满足条件的数有"<<count<<"个"<<endl;
	cout<<"结果为"<<sum; 
	return 0; 
} 
