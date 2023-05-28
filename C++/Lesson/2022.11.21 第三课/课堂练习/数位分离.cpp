#include<iostream>
using namespace std;
//ÊýÎ»·ÖÀë
int res[1000]; 
int main(){
	int n;
	cin>>n;
	int i = 1;
	bool flag = true;
	while(n/10!=0){
		if(!flag){
			n/=10;
			i++;
		}
		res[i] = n%10; 
		flag  = false;
	}
	for(int j = i;j>0;j--){
		cout<<res[j]<<' ';
	}
	return 0;
} 
