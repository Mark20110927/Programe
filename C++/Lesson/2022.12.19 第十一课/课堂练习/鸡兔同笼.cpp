#include<iostream>
using namespace std;
//����ͬ�� 
int main(){
	int ji,tu;
	for(ji = 1;ji<=34;ji++){
		for(tu = 1;tu<=34;tu++){
			if(ji + tu==35&&2*ji+4*tu==94){
				cout<<"����"<<ji<<"ֻ"<<endl;
				cout<<"����"<<tu<<"ֻ"<<endl;
			}
		}
	} 
	return 0; 
} 
