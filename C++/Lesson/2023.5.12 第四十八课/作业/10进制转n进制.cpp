#include<bits/stdc++.h>
using namespace std;
//n进制转n进制 
int res;
int ch(char c){
	if (c >= '0' && c <= '9') {
		return c - '0';
	} else {
		return c - 'A' + 10;
	}
}
void change_n210(int num,int jz){
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
void change_102n(string str,int m){
	int number = 0; 
	for (int i = 0; i < str.size(); ++i) {
		number *= m;
		number += ch(str[i]);
	}
	res = res;
}
int main(){
	int jinzhi1,jinzhi2;
	string c;
	while(scanf("%d %d",jinzhi1,jinzhi2)!=EOF){
		cin>>c;
		change_102n(c,jinzhi1); 
		change_n210(res,jinzhi2);
	}
	return 0;
}
