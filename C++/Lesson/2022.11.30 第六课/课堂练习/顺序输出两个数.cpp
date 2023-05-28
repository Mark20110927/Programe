#include<iostream>
using namespace std;
//顺序输出三个数
int main(){
	int a,b;//假设a是大的数，b是小的数
	cin>>a>>b;
	if(a<b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	//cout<<tmp;注意：这里的tmp是一个局部变量，不能再if外面使用 
	cout<<a<<" "<<b<<endl;
	return 0; 
} 
