#include<iostream>
using namespace std;
//�жϳɼ��ȼ� 
int main(){
	int s;
	cout<<"������һ��0~100������"<<endl; 
	cin>>s;
	if(s>=90) {     //����ķ���s<90 
		cout<<"A"<<endl;
	}
	else if(s>=80){     //����ķ���s<80
		cout<<"B"<<endl;
	}
	else if(s>=70){      //����ķ���s<70
		cout<<"C"<<endl;
	}
	else if(s>=60){      //����ķ���s<60
		cout<<"D"<<endl;
	}
	else{
		cout<<"F"<<endl;
	}
	return 0; 
} 
