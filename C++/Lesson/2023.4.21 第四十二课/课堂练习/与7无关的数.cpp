#include<bits/stdc++.h>
using namespace std;
//��7�޹ص��� 
int sum = 0;
bool juge(int x){
	if(x%7==0)
		return false;
	int r;
	//��λ����ģ�� 
	while(x!=0){
		r = x%10;
		if(r==7)
			return false;
		x/=10;
	}
	return true;
} 
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(juge(i))
			sum+=i*i;
	}
	cout<<sum;
	return 0; 
} 
