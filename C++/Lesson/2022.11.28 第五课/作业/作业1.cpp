#include<iostream>
using namespace std;
int main(){
	int y;
	cout<<"������һ����ݣ�"<<endl;
	cin>>y;
	if(y%100!=0&&y%4==0||y%400==0) {
		cout<<"����"<<endl;
	}
	if(!(y%100!=0&&y%4==0||y%400==0)) {
		cout<<"ƽ��"<<endl;
	}
	return 0; 
} 
