#include<iostream>
using namespace std;
//BMI = ���أ�kg�� /��ߣ�m�� /��ߣ�m��
int main(){
	float w,h;
	cout<<"���������أ�(kg)"<<endl; 
	cin>>w;
	cout<<"��������ߣ�(m)"<<endl; 
	cin>>h;
	float bmi = w/h/h;
	if(bmi<18.5)
		cout<<"ƫ��"<<endl;
	else if(bmi<24)
		cout<<"����"<<endl;
	else if(bmi<28)
		cout<<"ƫ��"<<endl;
	else if(bmi<40)
		cout<<"����"<<endl;
	else
		cout<<"���ضȷ���"<<endl;
		
	return 0; 
} 
