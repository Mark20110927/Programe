#include<bits/stdc++.h>
using namespace std;
//作业-简单计算器 
int main(){
	int i1,i3;
	char c2;
	cin>>i1>>i3>>c2;
	switch(c2){
		case '+':
			cout<<i1+i3;break; 
		case '-':
			cout<<i1-i3;break;
		case '*':
			cout<<i1*i3;break;
		case '/':
			if(i3==0)
				cout<<"Divided by zero!";
			else
				cout<<i1/i3;break;
		default:
			cout<<"Invalid operator!";break;	
	}
	return 0; 
} 
