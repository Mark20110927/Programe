#include<bits/stdc++.h>
using namespace std;
//���ֵ��Сֵ���� 
int maxf(int x,int y){
	if(x>y)
		return x;
	else
		return y;
} 
int minf(int x,int y){
	return x>y?y:x;
} 
int main(){
	int x,y;
	cin>>x>>y;
	cout<<x<<"��"<<y<<"�����ֵ��"<<maxf(x,y)<<endl; 
	cout<<x<<"��"<<y<<"����Сֵ��"<<minf(x,y)<<endl; 
	return 0; 
} 
