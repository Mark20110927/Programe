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
	a.name = "С��";
	a.age = 10;
	A.name = "����ʦ";
	A.age = 30;
	b.name = "С��";
	b.age = 11;
	B.name = "����ʦ";
	B.age = 33;
	A.p1 = &a;
	A.p = &B;
	B.p1 = &b;
	B.p = &A;
	cout<<A.name<<"��ѧ����"<<A.p1->name<<endl;
	cout<<B.name<<"��ѧ����"<<B.p1->name<<endl;
	cout<<A.name<<"��ͬ����"<<A.p->p->p->name<<endl;
	cout<<B.name<<"��ͬ����"<<B.p->p->p->p->p->p->p->p->p->name<<endl;
	cout<<a.name<<"��������"<<A.p1->age<<endl;
	cout<<b.name<<"��������"<<B.p1->age<<endl;
	cout<<A.name<<"��������"<<B.p->p->p->age<<endl;
	cout<<B.name<<"��������"<<A.p->p->p->age<<endl;
	return 0;
} 
