#include<bits/stdc++.h>
using namespace std;
//n进制转10进制 
void change(int num,int jz){
	stack<int> s;
	if(num==0)
		s.push(num);
	else{
		while(num){
			int tmp;
			tmp = num%jz;
			s.push(tmp);
			num/=10;
		}
	} 
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	} 
} 
int main(){
	int n,jinzhi;
	while(scanf("%d",&n) != EOF){
		cin>>jinzhi;
		change(n,jinzhi); 
	}
	return 0; 
} 
