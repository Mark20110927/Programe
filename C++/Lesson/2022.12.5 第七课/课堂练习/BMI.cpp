#include<iostream>
using namespace std;
//BMI = 体重（kg） /身高（m） /身高（m）
int main(){
	float w,h;
	cout<<"请输入体重！(kg)"<<endl; 
	cin>>w;
	cout<<"请输入身高！(m)"<<endl; 
	cin>>h;
	float bmi = w/h/h;
	if(bmi<18.5)
		cout<<"偏瘦"<<endl;
	else if(bmi<24)
		cout<<"正常"<<endl;
	else if(bmi<28)
		cout<<"偏胖"<<endl;
	else if(bmi<40)
		cout<<"肥胖"<<endl;
	else
		cout<<"极重度肥胖"<<endl;
		
	return 0; 
} 
