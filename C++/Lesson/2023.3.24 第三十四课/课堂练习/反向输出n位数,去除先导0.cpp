#include<bits/stdc++.h>
using namespace std;
//�������nλ��,ȥ���ȵ�0 
bool flag;
int main(){
	long long  n;
	cin>>n;
	while(n){
		if(flag==0&&n%10==0){
			n/=10;
		}
		else{
			cout<<n%10;
			flag = true;
			n/=10;
		}
	}
	return 0; 
} 
