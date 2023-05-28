#include<iostream>
using namespace std;
//判断成绩等级 
int main(){
	int s;
	cout<<"请输入一个0~100得数！"<<endl; 
	cin>>s;
	if(s>=90) {     //这里的否定是s<90 
		cout<<"A"<<endl;
	}
	else if(s>=80){     //这里的否定是s<80
		cout<<"B"<<endl;
	}
	else if(s>=70){      //这里的否定是s<70
		cout<<"C"<<endl;
	}
	else if(s>=60){      //这里的否定是s<60
		cout<<"D"<<endl;
	}
	else{
		cout<<"F"<<endl;
	}
	return 0; 
} 
