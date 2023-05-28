#include<bits/stdc++.h>
using namespace std;
//Ç®±ÒÕÒÁã1
int qian[] = {100,50,20,10,5,1};
int shu[6]; 
int main(){
	int money;
	cin>>money;
	 for(int i = 0;i<6;i++){
	 	shu[i] = money/qian[i];
	 	money-=shu[i]*shu[i];
	 }
	for(int i = 0;i<6;i++){
		if(shu[i]>0)
			cout<<shu[i]<<"ÕÅ"<<qian[i]<<"Ôª"<<endl; 
	}
	return 0; 
} 
