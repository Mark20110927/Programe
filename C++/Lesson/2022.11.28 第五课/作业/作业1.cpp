#include<iostream>
using namespace std;
int main(){
	int y;
	cout<<"请输入一个年份！"<<endl;
	cin>>y;
	if(y%100!=0&&y%4==0||y%400==0) {
		cout<<"闰年"<<endl;
	}
	if(!(y%100!=0&&y%4==0||y%400==0)) {
		cout<<"平年"<<endl;
	}
	return 0; 
} 
