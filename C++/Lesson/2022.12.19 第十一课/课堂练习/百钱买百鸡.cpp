#include<iostream>
using namespace std;
//��Ǯ��ټ� 
int main(){
	int x,y,z,flag= 0;//����0-20 ĸ��0-33 С��0-99
	for(x = 0;x<=20;x++){
		for(y = 0;y<=33;y++){
			for(z = 0;z<=99;z+=3){
				if(x+y+z==100&&5*x+3*y+z/3==100){
					flag++;
					cout<<"����"<<flag<<endl;
					cout<<"������"<<x<<"ֻ"<<endl;
					cout<<"ĸ����"<<y<<"ֻ"<<endl;
					cout<<"С����"<<z<<"ֻ"<<endl;
				}
			}
		}
	} 
	return 0; 
} 
