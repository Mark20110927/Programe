#include<iostream>
using namespace std;
//�ж����� 
int main(){
	int iq; 
	cout<<"������������̣�"<<endl;
	cin>>iq;
	if(iq>140){
		if(iq<=160){
			cout<<"��ţ�"<<endl;
		}
		if(iq>160){
			cout<<"����е���ţ�"<<endl;
		} 
	}
	if(iq<=140)
		cout<<"������ţ�"<<endl;
	return 0; 
} 
