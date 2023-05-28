#include<bits/stdc++.h>
using namespace std;
//高精度反向输出n位数,去除先导0 
int main(){
	string s;
	cin>>s;
	int n = s.size()-1;
	while(s[n]=='0'&&n>0){
		n--;
	}
	for(int i = n;i>=0;i--)
		cout<<s[i];
	return 0; 
} 
