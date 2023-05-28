#include<bits/stdc++.h>
using namespace std;
//结构体构造函数练习 
struct SS{
	int a;
	string s;
	SS(string s1,int a1){
		s = s1;
		a = a1;
	}
}; 
int main(){
	SS p = SS("小明",10);
	cout<<p.a<<p.s<<endl;
	return 0; 
} 
