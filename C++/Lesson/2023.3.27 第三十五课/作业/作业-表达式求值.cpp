#include<bits/stdc++.h>
using namespace std;
//作业-表达式求值
stack<int> num;
stack<char> op;
//优先级表
int yxj[128];
//求值
void eval(){
	//第二个操作数
	int b = num.top();
	num.pop();
	//第一个操作数
	int a = num.top();
	num.pop();
	//运算符
	char c = op.top();
	op.pop();
	//计算结果
	int res;
	if(c=='+') res=a+b;
	if(c=='-') res=a-b; 
	if(c=='*') res=a*b; 
	if(c=='/') res=a/b; 
	//结果入栈
	num.push(res); 
	 
} 
int main(){
	//设置优先级
	yxj['+'] = 1; 
	yxj['-'] = 1;
	yxj['*'] = 2;
	yxj['/'] = 2;
	//输入字符串
	string s;
	cin>>s;
	for(int i = 0;i<s.size();i++){
		//数字入栈
		if(isdigit(s[i])){
			int j = i,x = 0;
			while(isdigit(s[j])&&j<s.size()){
				x = x*10+s[j]-'0';
				j++;
			}
			i = j-1;
			num.push(x);
		} 
		//左括号无优先级，直接入栈
		else if(s[i]=='('){
			op.push('(');
		} 
		else if(s[i]==')'){
			while(op.top()!='(')
				eval();
			op.pop();
		} 
		//运算符
		else{
			while(!op.empty()&&yxj[op.top()]>=yxj[s[i]])
				eval();
			op.push(s[i]);
		} 
	} 
	while(!op.empty())
		eval();
	cout<<num.top();
	return 0; 
} 
