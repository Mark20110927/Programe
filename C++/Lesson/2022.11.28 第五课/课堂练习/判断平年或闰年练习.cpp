#include<iostream>
using namespace std;
//�ж����� 
int main(){
	int n;
	cout<<"����һ����ݣ�"<<endl; 
	cin>>n;
	//���������  ���ǲ��ǰ�����߲��ǰ��� 
	if(n%100!=0&&n%4==0||n%400==0){
		cout<<"����"<<endl;	 
	}
	if(!(n%100!=0&&n%4==0||n%400==0)){
		cout<<"ƽ��"<<endl;
	}
	return 0; 
} 
