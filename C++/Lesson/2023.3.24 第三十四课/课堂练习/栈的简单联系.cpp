#include<iostream>
#include<stack>
using namespace std;
//ջ�ļ���ϵ 
stack <int> b;
int main(){
	cout<<b.empty()<<endl;
	cout<<b.size()<<endl;
	b.push(1);
	b.push(2);
	b.push(3);
	cout<<b.empty()<<endl;
	cout<<b.size()<<endl;
	cout<<b.top();
	b.pop();
	cout<<b.top();
	b.pop();
	cout<<b.top();
	return 0; 
} 
