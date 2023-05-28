#include<iostream>
using namespace std;
//抓小偷 
int main(){
	int xiaotou;
	for(int i = 1;i<=4;i++){
		if((i!=1)+(i==3)+(1==4)+(i!=4) ==3){
			xiaotou = i;
		}
	} 
	cout<<"小透是："<<xiaotou<<endl;
	return 0; 
} 
