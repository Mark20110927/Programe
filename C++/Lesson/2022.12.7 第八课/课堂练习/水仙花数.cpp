#include<iostream>
using namespace std;
//水仙花数 
int main(){
	int ge,shi,bai,t;
	bool flag=false;
	for(int i =100;i<=999;i++){
		//数位分离
		ge=i%10;
		t =i/10;
		shi = t%10;
		bai = t/10;
		//判断水仙花数
		if(ge*ge*ge+shi*shi*shi+bai*bai*bai==i){
			flag = true;
			cout<<i<<"  "; 
		}
	} 
	if(flag==false)
		cout<<"没有水仙花数"<<endl; 
	return 0; 
} 
