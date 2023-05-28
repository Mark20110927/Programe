#include<iostream>
using namespace std;
int main(){
	string name;
	int age;
	float height;
	float weight;
	cout<<"您好，欢迎使用语句合成器!"<<endl;
	cout<<"请您输入您的个人信息，我们将全力保护您的隐私，可放心输入"<<endl;
	cout<<"您只需要输入数字，不需要带单位。"<<endl<<"输入完成后请按Enter"<<endl; 
	cout<<"请输入您的姓名"<<endl;
	cin>>name;
	cout<<"请输入您的年龄"<<endl;
	cin>>age;
	cout<<"请输入您的身高（单位：厘米）"<<endl;
	cin>>height;
	cout<<"请输入您的体重（单位：斤）"<<endl;
	cin>>weight;
	cout<<"您好，"<<name<<"。您今年"<<age<<"岁，身高为"<<height<<"厘米，体重为";
	cout<<weight<<"斤"<<endl;
	cout<<"感谢您使用本合成器，祝您生活愉快！" ;
	return 0;
} 
