#include<iostream>
using namespace std;
//쳲��������� 
int main(){
	int a1 = 1,a2 = 1;
	int a3 = a1+a2;
	cout<<"쳲��������е�ǰʮ����"<<endl;
	cout<<a1<<"  "<<a2<<"  ";
	for(int i = 3;i<=10;i++){
		cout<<a3<<"  ";
		a1 = a2;
		a2 = a3;
		a3 = a1+a2;
	} 
	return 0; 
} 
