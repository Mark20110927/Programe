#include<iostream>
using namespace std;
//鸡兔同笼 
int main(){
	int ji,tu;
	for(ji = 1;ji<=34;ji++){
		for(tu = 1;tu<=34;tu++){
			if(ji + tu==35&&2*ji+4*tu==94){
				cout<<"鸡有"<<ji<<"只"<<endl;
				cout<<"兔有"<<tu<<"只"<<endl;
			}
		}
	} 
	return 0; 
} 
