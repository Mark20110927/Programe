#include<bits/stdc++.h>
using namespace std;
//�ṹ�������ϰ 
struct student{
	string name;
	int age;
	double score;
}; 
int main(){
	//�Գ�Ա�Ĳ��� 
	student a = {"С��",10,59.5};
	cout<<a.name<<"��������"<<a.age<<"��"<<endl;
	cout<<"������"<<a.score<<"��"<<endl; 
	//�Խṹ��������� 
	student b;
	b = a;
	cout<<b.score<<endl;
	//�ṹ������
	student c[10];
	for(int i = 0;i<10;i++){
		c[i] = a;
		cout<<c[i].name<<endl;
	}
	return 0; 
} 
