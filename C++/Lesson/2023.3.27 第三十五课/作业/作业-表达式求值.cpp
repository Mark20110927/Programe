#include<bits/stdc++.h>
using namespace std;
//��ҵ-���ʽ��ֵ
stack<int> num;
stack<char> op;
//���ȼ���
int yxj[128];
//��ֵ
void eval(){
	//�ڶ���������
	int b = num.top();
	num.pop();
	//��һ��������
	int a = num.top();
	num.pop();
	//�����
	char c = op.top();
	op.pop();
	//������
	int res;
	if(c=='+') res=a+b;
	if(c=='-') res=a-b; 
	if(c=='*') res=a*b; 
	if(c=='/') res=a/b; 
	//�����ջ
	num.push(res); 
	 
} 
int main(){
	//�������ȼ�
	yxj['+'] = 1; 
	yxj['-'] = 1;
	yxj['*'] = 2;
	yxj['/'] = 2;
	//�����ַ���
	string s;
	cin>>s;
	for(int i = 0;i<s.size();i++){
		//������ջ
		if(isdigit(s[i])){
			int j = i,x = 0;
			while(isdigit(s[j])&&j<s.size()){
				x = x*10+s[j]-'0';
				j++;
			}
			i = j-1;
			num.push(x);
		} 
		//�����������ȼ���ֱ����ջ
		else if(s[i]=='('){
			op.push('(');
		} 
		else if(s[i]==')'){
			while(op.top()!='(')
				eval();
			op.pop();
		} 
		//�����
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
