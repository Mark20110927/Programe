#include<iostream>
using namespace std;
//������ 
int main(){
	//�ߵ����� 
	int n;
	cin>>n;
	int n0 = n;
	int m = 0;
	while(n>0){
		m = m*10 + n%10;
		n /= m;
	} 
	if(m ==n0)
		cout<<"�ǻ�����"<<endl;
	else
		cout<<"���ǻ�����"<<endl;
	return 0; 
} 
