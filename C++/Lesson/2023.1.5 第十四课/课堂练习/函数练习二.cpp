#include<bits/stdc++.h>
using namespace std;
//函数练习二 没有返回值 有参数
void f1(string name,int age){
	cout<<"我是"<<name<<"，我今年"<<age<<"岁"<<endl;
} 
int main(){
	f1("小明",11);
	f1("小红",12);
	string a = "小刚";
	int age = 13;
	f1(a,age); 
	return 0; 
} 
