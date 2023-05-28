#include<iostream>
using namespace std;
//判断奇偶数 
int main(){
	int n;
	cout<<"请输入一个数！"<<endl;
	cin>>n;
	if(n%2==0){
		cout<<"偶数"<<endl;
	}
	if(n%2!=0){
		cout<<"奇数"<<endl;
	}
	return 0; 
} 
