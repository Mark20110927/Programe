#include<iostream>
using namespace std;
//ˮ�ɻ��� 
int main(){
	int ge,shi,bai,t;
	bool flag=false;
	for(int i =100;i<=999;i++){
		//��λ����
		ge=i%10;
		t =i/10;
		shi = t%10;
		bai = t/10;
		//�ж�ˮ�ɻ���
		if(ge*ge*ge+shi*shi*shi+bai*bai*bai==i){
			flag = true;
			cout<<i<<"  "; 
		}
	} 
	if(flag==false)
		cout<<"û��ˮ�ɻ���"<<endl; 
	return 0; 
} 
