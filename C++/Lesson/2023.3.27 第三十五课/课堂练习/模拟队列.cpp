#include<bits/stdc++.h>
using namespace std;
//Ä£Äâ¶ÓÁÐ
const int N = 1e5+10;
int q[N];
int h = 0;
int t = -1; 
int main(){
	int m;
	cin>>m;
	while(m--){
		string s;
		cin>>s;	
		if(s=="push"){
			int x;
			cin>>x;
			q[++t] = x;
		}
		if(s=="pop"){
			h++;
		}
		if(s=="empty"){
			if(t>=h)
				cout<<"No"<<endl;
			else
				cout<<"Yes"<<endl;
		}
		if(s=="query"){
			cout<<q[h]<<endl;
		}
	}
	return 0; 
} 
