#include<bits/stdc++.h>
using namespace std;
//��ҵ-���s=1+..+n 
int main(){
	int num = 1,res = 0,s = 0;
	do{
		s = s+num;
		num++;
		res++;
	}while(s<1000);
	cout<<res;
	return 0; 
} 
