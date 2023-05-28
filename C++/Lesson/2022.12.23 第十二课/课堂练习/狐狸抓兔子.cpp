#include<bits/stdc++.h>
using namespace std;
//ºüÀê×¥ÍÃ×Ó 
int main(){
	bool a[100];
	for(int i = 1;i<=10;i++)
		a[i] = true;
	int cishu = 2;
	a[1] =false;
	int i = 1;
	while(cishu<=1000){
		i = (i+cishu)%10;
		if(i==0)
			a[10]=false;
		else
			a[i] = false;
		cishu++;
	}	
	for(int i = 1;i<=10;i++){
		if(a[i]){
			cout<<i<<"  ";
		}
	}
	return 0; 
} 
