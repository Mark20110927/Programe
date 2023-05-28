#include<bits/stdc++.h>
using namespace std;
//作业-反向输出一个n位数
int res[100]; 
int main(){
	int num;
	cin>>num;
	int j = 1;
	while(num/10>0){
		if(j!=1)
			res[j]/=10;
		res[j] = num%10;
		j++;
	}
	int z = 1,x = 1;
	while(res[z]==0){
		x++;
		z++;
		if(res[z]!=0)
			break;
	}
	for(int i = x;i<=j;i++)
		cout<<res[i]<<' ';
	return 0; 
} 
