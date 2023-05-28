#include<bits/stdc++.h>
using namespace std;
//作业-斐波拉契数列 
const int N = 50;
int num[N];
int main(){
	int k;
	cin>>k;
	int tmp = k;
	num[1] = 1;
	num[2] = 1;
	int i = 2,j = 3;
	while(tmp--){
		num[j++] = num[i-1]+num[i++];
	}
	cout<<num[k]<<endl;
	return 0; 
} 
