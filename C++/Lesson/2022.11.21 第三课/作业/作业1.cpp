#include<iostream>
using namespace std;
int main(){
	cout<<"��������������Ϸ" <<endl;
	cout<<"��������һ����λ���������ǽ����ӡ���ĵ���"<<endl;
	int n,ge,shi,bai;
	cin>>n;
	ge=n%10;
	n/=10;
	shi=n%10;
	n/=10;
	bai=n%10;
	cout<<"������ĵ�����"<<ge*100+shi*10+bai<<endl; 
	return 0;
} 
