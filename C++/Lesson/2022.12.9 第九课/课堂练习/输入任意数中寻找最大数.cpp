#include<iostream>
using namespace std;
//������������Ѱ������� 
int main(){
	//����#���ǽ�������
	int maxn = 0,n;
	cin>>n;
	while(n!=0){
		if(maxn<n)
			maxn=n;
		cin>>n;
	} 
	cout<<"����������"<<maxn<<endl;
	return 0; 
} 
