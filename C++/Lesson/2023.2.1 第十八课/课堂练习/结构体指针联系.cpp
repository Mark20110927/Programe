#include<bits/stdc++.h>
using namespace std;
//�ṹ��ָ����ϵ 
struct student{
	string name;
	int age;
	double score;
}a = {"С��",10}; 
int main(){
	student *p = &a;
	cout<<(*p).name<<endl;
	cout<<p->score<<endl;
	cout<<p->age<<endl;
	cout<<p->name<<endl;
	return 0; 
} 
