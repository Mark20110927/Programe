#include<bits/stdc++.h>
using namespace std;
//×÷Òµ-Ä£ÄâÕ»
const int N = 1e5;
int a[N];
int top = -1; 
void push(int x){
	a[++top] = x;
} 
void pop(){
	top--;
}
void empty(){
	if(top==-1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
int query(){
	cout<<a[top]<<endl;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s=="push"){
			int b;
			cin>>b;
			push(b);
		}
		if(s=="pop"){
			pop();
		}
		if(s=="empty"){
			empty();
		}
		if(s=="query"){
			cout<<query()<<endl;
		}
	}
	return 0; 
} 
