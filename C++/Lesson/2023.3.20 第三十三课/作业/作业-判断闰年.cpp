#include<bits/stdc++.h>
using namespace std;
//��ҵ-�ж����� 
int main(){
	int year;
	cin>>year;
	if(year%4==0&&year%100!=0&&year%400==0)
		cout<<'Y';
	else
		cout<<'N'; 
	return 0; 
} 
