#include<iostream>
using namespace std;
int main(){
	float banjing,pai = 3.14;
	cout<<"欢迎您使用面积计算器"<<endl;
	cout<<"您需要输入圆形的周长，机器将输出长圆形面积和周长（单位：厘米）"<<endl;
	cout<<"输入完成后请按Enter"<<endl<<"请您输入圆形的半径"<<endl;
	cin>>banjing;
	cout<<"圆形的面积为"<<pai*banjing*banjing<<"平方厘米"<<endl;
	cout<<"圆形的周长为"<<2*pai*banjing<<"厘米"<<endl; 
	return 0;
} 
