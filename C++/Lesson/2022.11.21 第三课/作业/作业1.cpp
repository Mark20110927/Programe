#include<iostream>
using namespace std;
int main(){
	cout<<"您将体验数字游戏" <<endl;
	cout<<"请您输入一个三位整数，我们将会打印它的倒数"<<endl;
	int n,ge,shi,bai;
	cin>>n;
	ge=n%10;
	n/=10;
	shi=n%10;
	n/=10;
	bai=n%10;
	cout<<"这个数的倒数是"<<ge*100+shi*10+bai<<endl; 
	return 0;
} 
