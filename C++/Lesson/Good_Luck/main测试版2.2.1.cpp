#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	int a,bb = 0,cc = 0,dd = 0,h; 
	char b,c,d,e,f;
	cout<<"��ӭʹ�ó齱�����"<<endl;
		cout<<"���롮d ����������齱"<<endl<<"���롮w �������ľ߳齱"<<endl;
		cout<<"���롮s �������¼��齱"<<endl<<"���롮t ��������߳齱"<<endl; 
		cin>>b;
		h = int(b);
		if(h == 100) {
			do{
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
						cout<<"���̻�"<<endl;
						break;
					case 5:
						cout<<"�����"<<endl;
						break;
					case 6:
						cout<<"���ӻ�"<<endl;
						break;
					case 7:
						cout<<"лл����"<<endl;
						break;
					case 8:
						cout<<"����һ��"<<endl;
						cout<<"��ϲ�������ٳ�һ�Σ�"<<endl;
						break;
					case 9:
						cout<<"лл����"<<endl;
						break;
					case 10:
						cout<<"лл����"<<endl;
						break;
				}
			}while(a == 8);
		}
		if(h == 119) {
			do{
				srand((int)time(0));
				bb = rand() % 10 + 1; 
				cout<<"���ĳ齱����ǣ�"; 
				switch(bb){
					case 1:
						cout<<"80ɫ��˱�"<<endl;
						break;
					case 2:
						cout<<"120ɫ��˱�"<<endl;
						break;
					case 3:
						cout<<"�ֳ�"<<endl;
						break;
					case 4:
						cout<<"�綯���ʻ�"<<endl;
						break;
					case 5:
						cout<<"40ɫ��Ǧ"<<endl;
						break;
					case 6:
						cout<<"30ɫ��˱�"<<endl;
						break;
					case 7:
						cout<<"лл����"<<endl;
						break;
					case 8:
						cout<<"����һ��"<<endl;
						cout<<"��ϲ�������ٳ�һ�Σ�"<<endl;
						break;
					case 9:
						cout<<"����һ��"<<endl;
						cout<<"��ϲ�������ٳ�һ�Σ�"<<endl;
						break;
					case 10:
						cout<<"лл����"<<endl;
						break;
				} 
			}while(bb == 8||bb == 9);
		}
		if(h == 115) {
			do{
				srand((int)time(0));
				cc = rand() % 10 + 1; 
				cout<<"���ĳ齱����ǣ�"; 
				switch(cc){
					case 1:
						cout<<"��10����С��Ƶ"<<endl;
						break;
					case 2:
						cout<<"��20����С��Ƶ"<<endl;
						break;
					case 3:
						cout<<"��һ����Ӱ"<<endl;
						break;
					case 4:
						cout<<"��һ������"<<endl;
						break;
					case 5:
						cout<<"��10�����մ���Ƶ"<<endl;
						break;
					case 6:
						cout<<"���ӻ�"<<endl;
						break;
					case 7:
						cout<<"лл����"<<endl;
						break;
					case 8:
						cout<<"����һ��"<<endl;
						cout<<"��ϲ�������ٳ�һ�Σ�"<<endl;
						break;
					case 9:
						cout<<"����һ��"<<endl;
						cout<<"��ϲ�������ٳ�һ�Σ�"<<endl;
						break;
					case 10:
						cout<<"лл����"<<endl;
						break;
				} 
			}while(cc == 8||cc == 9);
		}
		if(h == 116) {
			do{
				srand((int)time(0));
				dd = rand() % 10 + 1; 
				cout<<"���ĳ齱����ǣ�"; 
				switch(dd){
					case 1:
						cout<<"�ָ�1"<<endl;
						break;
					case 2:
						cout<<"�ָ�2"<<endl;
						break;
					case 3:
						cout<<"�ָ�3"<<endl;
						break;
					case 4:
						cout<<"�ָ�4"<<endl;
						break;
					case 5:
						cout<<"�ָ�5"<<endl;
						break;
					case 6:
						cout<<"�ָ�6"<<endl;
						break;
					case 7:
						cout<<"лл����"<<endl;
						break;
					case 8:
						cout<<"����һ��"<<endl;
						cout<<"��ϲ�������ٳ�һ�Σ�"<<endl;
						break;
					case 9:
						cout<<"�ָ�7"<<endl;
						break;
					case 10:
						cout<<"лл����"<<endl;
						break;
				} 
			}while(dd == 8);
		}
} 
