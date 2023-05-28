#include<bits/stdc++.h>
using namespace std;
//作业-蓝桥杯真题_第二题 
const int N = 1e5+10;
int num[N],sum = 0;
int main(){
	int n = 0,m = 0;
	cin>>n>>m;
	num[1] = n;
	num[m-n+1] = m; 
	for(int i = 2;i<=m-n;i++)
		num[i] = num[i-1]+1;
	for(int i = 1;i<=m-n+1;i++){
		int flag = true;
		while(num[i]/10>0){
			int tmp = num[i]%10; 
			if(tmp%2==0){
				flag = false;
				break;
			}
			num[i]=num[i]/10;
		}
		if(flag)
			sum++;
			
	}
	cout<<sum;
	return 0; 
} 
