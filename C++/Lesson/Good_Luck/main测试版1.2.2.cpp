#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	int a; 
	char b,c;
	cout<<"欢迎使用抽奖软件！"<<endl;
	cout<<"输入‘k ’开始"<<endl;
	cin>>b;
	b = int(b);
	if(b == 107) {
		for(;true;){
			srand((int)time(0));
			a = rand() % 10 + 1; 
			cout<<"您的抽奖结果是："; 
			switch(a){
				case 1:
					cout<<"吹风机"<<endl;
					break;
				case 2:
					cout<<"洗衣机"<<endl;
					break;
				case 3:
					cout<<"电视机"<<endl;
					break;
				case 4:
					cout<<"笔记本"<<endl;
					break;
				case 5:
					cout<<"拼图"<<endl;
					break;
				case 6:
					cout<<"冰箱"<<endl;
					break;
				case 7:
					cout<<"谢谢参与"<<endl;
					break;
				case 8:
					cout<<"再来一次"<<endl;
					cout<<"恭喜您可以再抽一次！"<<endl; 
					break;
				case 9:
					cout<<"撸小狮子半小时"<<endl;
					break;
				case 10:
					cout<<"谢谢参与"<<endl;
					break;
			}
			if(a !=8){
				break;
			}
		} 
	}
	
	
} 
