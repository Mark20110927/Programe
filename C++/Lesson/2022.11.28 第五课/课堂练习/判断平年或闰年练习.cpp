#include<iostream>
using namespace std;
//判断闰年 
int main(){
	int n;
	cout<<"输入一个年份："<<endl; 
	cin>>n;
	//闰年的条件  考虑不是百年或者不是百年 
	if(n%100!=0&&n%4==0||n%400==0){
		cout<<"闰年"<<endl;	 
	}
	if(!(n%100!=0&&n%4==0||n%400==0)){
		cout<<"平年"<<endl;
	}
	return 0; 
} 
