#include<bits/stdc++.h>
using namespace std;
//作业-蓝桥杯真题_第一题 
int num[5]; 
int main(){
	cin>>num[2];
	num[1] = num[2]-1;
	num[3] = num[2]+1;
	cout<<num[1]+num[3]<<endl;
	return 0; 
} 
