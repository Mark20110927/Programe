#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	int a; 
	char b,c;
	cout<<"��ӭʹ�ó齱�����"<<endl;
	cout<<"���롮k ����ʼ"<<endl;
	cin>>b;
	b = int(b);
	if(b == 107) {
		for(;true;){
			srand((int)time(0));
			a = rand() % 10 + 1; 
			cout<<"���ĳ齱����ǣ�"; 
			switch(a){
				case 1:
					cout<<"�����"<<endl;
					break;
				case 2:
					cout<<"ϴ�»�"<<endl;
					break;
				case 3:
					cout<<"���ӻ�"<<endl;
					break;
				case 4:
					cout<<"�ʼǱ�"<<endl;
					break;
				case 5:
					cout<<"ƴͼ"<<endl;
					break;
				case 6:
					cout<<"����"<<endl;
					break;
				case 7:
					cout<<"лл����"<<endl;
					break;
				case 8:
					cout<<"����һ��"<<endl;
					cout<<"��ϲ�������ٳ�һ�Σ�"<<endl; 
					break;
				case 9:
					cout<<"ߣСʨ�Ӱ�Сʱ"<<endl;
					break;
				case 10:
					cout<<"лл����"<<endl;
					break;
			}
			if(a !=8){
				break;
			}
		} 
	}
	
	
} 
