#include<iostream>
#include<iomanip>
using namespace std;
//��ӡ99�˷��� 2
int main(){
	//��һ��
	cout<<"  1";
	for(int i = 2;i<=9;i++){
		cout<<setw(5)<<i;
	} 
	cout<<endl;
	//�ڶ���
	cout<<"  -";
	for(int i = 2;i<=9;i++){
		cout<<setw(5)<<'-';
	} 
	cout<<endl;
	//�����
	for(int i = 1;i<=9;i++){
		cout<<i<<"|"<<i;
		for(int j = 2;j<=i;j++){
			cout<<setw(5)<<i*j;
		}
		cout<<endl;
	} 
	return 0; 
} 
