#include<bits/stdc++.h>
using namespace std;
//函数练习三 有返回值 有参数
int f1(string name,int age){
	cout<<"我是"<<name<<"，我今年"<<age<<"岁"<<endl;
	return age+1; 
} 
int main(){
	cout<<f1("小明",11)<<endl;
	return 0; 
} 
