#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int age;
}a,b;
struct teacher{
	string name;
	int age;
	student *p1;
	teacher *p;
}A,B;
int main(){
	a.name = "小明";
	a.age = 10;
	A.name = "张老师";
	A.age = 30;
	b.name = "小红";
	b.age = 11;
	B.name = "李老师";
	B.age = 33;
	A.p1 = &a;
	A.p = &B;
	B.p1 = &b;
	B.p = &A;
	cout<<A.name<<"的学生是"<<A.p1->name<<endl;
	cout<<B.name<<"的学生是"<<B.p1->name<<endl;
	cout<<A.name<<"的同事是"<<A.p->p->p->name<<endl;
	cout<<B.name<<"的同事是"<<B.p->p->p->p->p->p->p->p->p->name<<endl;
	cout<<a.name<<"的年龄是"<<A.p1->age<<endl;
	cout<<b.name<<"的年龄是"<<B.p1->age<<endl;
	cout<<A.name<<"的年龄是"<<B.p->p->p->age<<endl;
	cout<<B.name<<"的年龄是"<<A.p->p->p->age<<endl;
	return 0;
} 
