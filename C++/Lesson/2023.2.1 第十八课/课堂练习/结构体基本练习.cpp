#include<bits/stdc++.h>
using namespace std;
//结构体基本练习 
struct student{
	string name;
	int age;
	double score;
}; 
int main(){
	//对成员的操作 
	student a = {"小明",10,59.5};
	cout<<a.name<<"的年龄是"<<a.age<<"岁"<<endl;
	cout<<"他考了"<<a.score<<"分"<<endl; 
	//对结构体整体操作 
	student b;
	b = a;
	cout<<b.score<<endl;
	//结构体数组
	student c[10];
	for(int i = 0;i<10;i++){
		c[i] = a;
		cout<<c[i].name<<endl;
	}
	return 0; 
} 
