#include<iostream>
using namespace std;
//百钱买百鸡 
int main(){
	int x,y,z,flag= 0;//公鸡0-20 母鸡0-33 小鸡0-99
	for(x = 0;x<=20;x++){
		for(y = 0;y<=33;y++){
			for(z = 0;z<=99;z+=3){
				if(x+y+z==100&&5*x+3*y+z/3==100){
					flag++;
					cout<<"方案"<<flag<<endl;
					cout<<"公鸡有"<<x<<"只"<<endl;
					cout<<"母鸡有"<<y<<"只"<<endl;
					cout<<"小鸡有"<<z<<"只"<<endl;
				}
			}
		}
	} 
	return 0; 
} 
