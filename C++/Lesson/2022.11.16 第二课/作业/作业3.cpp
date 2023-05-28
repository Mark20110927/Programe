#include<iostream>
using namespace std;
int main(){
	int chang,kuan;
	cout<<"欢迎您使用面积计算器"<<endl;
	cout<<"您需要输入长方形的长和宽，机器将输出长方形的面积（单位：厘米）"<<endl;
	cout<<"输入完成后请按Enter"<<endl<<"请您输入长方形的长"<<endl;
	cin>>chang;
	cout<<"请您输入长方形的宽"<<endl;
	cin>>kuan;
	cout<<"长方形的面积为"<<chang*kuan<<"平方厘米"<<endl<<"面积输出完成，"<<"感谢您使用本计算器！" <<endl;
	return 0;
} 
