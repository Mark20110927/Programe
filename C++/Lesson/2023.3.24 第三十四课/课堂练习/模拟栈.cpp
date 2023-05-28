#include<bits/stdc++.h>
using namespace std;
//Ä£ÄâÕ»
const int N = 1e5;
int a[N];
int top = -1; 
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s=="push"){
			int b;
			cin>>b;
			a[++top] = b;
		}
		if(s=="query"){
			cout<<a[top]<<endl;
		}
		if(s=="pop"){
			top--;
		}
		if(s=="empty"){
			cout<<(top==-1?"Yes":"No")<<endl;
		}
	}
	return 0; 
} 
