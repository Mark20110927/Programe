#include<bits/stdc++.h>
using namespace std;
//ָ���������ʵ�ֵ������ 
int main(){
	int a[]={1,2,3,4,5,6};
	//������
	for(int i = 5;i>=0;i--){
		cout<<a[i]<<"  ";
	} 
	cout<<endl;
	//ָ��
	int *p = &a[5];
	while(p>=a) {
		cout<<*p<<"  ";
		p--;
	}
	cout<<endl;
	return 0; 
} 
