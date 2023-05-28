#include<bits/stdc++.h>
using namespace std;
int numf(int n){
	int k = 0,num = 0;
	for(int i = n;i>=13;i--){
		if(i%13==0||i%17==0){
			k +=i;
			num++; 
			if(num == 10)	{
				return k;	
			}
			 
		}
	}
	return k;
}
int main(){
	int x;
	cout<<"请输入一个数！"<<endl;
	cin>>x;
	cout<<numf(x)<<endl;
	return 0; 
} 
