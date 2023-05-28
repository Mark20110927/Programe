#include<bits/stdc++.h>
using namespace std;
//结构体指针联系 
struct student{
	string name;
	int age;
	double score;
}a = {"小明",10}; 
int main(){
	student *p = &a;
	cout<<(*p).name<<endl;
	cout<<p->score<<endl;
	cout<<p->age<<endl;
	cout<<p->name<<endl;
	return 0; 
} 
