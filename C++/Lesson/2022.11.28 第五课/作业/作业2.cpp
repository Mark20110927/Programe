#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"请输入一个数或数字！"<<endl;
	cin>>a;
	if(a-101!=0&&a%3==0&&a%5==0) {
		cout<<"欧耶欧耶"<<endl; 
	}
	return 0; 
} 
