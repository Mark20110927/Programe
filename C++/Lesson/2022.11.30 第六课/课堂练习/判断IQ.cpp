#include<iostream>
using namespace std;
//判断智商 
int main(){
	int iq; 
	cout<<"请输入你的智商！"<<endl;
	cin>>iq;
	if(iq>140){
		if(iq<=160){
			cout<<"天才！"<<endl;
		}
		if(iq>160){
			cout<<"天才中的天才！"<<endl;
		} 
	}
	if(iq<=140)
		cout<<"不是天才！"<<endl;
	return 0; 
} 
