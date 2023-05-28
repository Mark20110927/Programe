#include<bits/stdc++.h>
using namespace std;
//×÷Òµ-ÓÊ·Ñ 
int main(){
	int weight = 0,money = 0;
	char tmp;
	bool jiaji;
	cin>>weight>>tmp;
	jiaji = tmp%2;
	money+=8;
	if(weight%1000!=0){
		weight-=1000;
		if(weight%500==0)
			money+=money/500*4;
		else{
			money+=weight/500*4+4;
		}
	}
	if(jiaji)
		money+=5;
	cout<<money;
	return 0; 
} 
