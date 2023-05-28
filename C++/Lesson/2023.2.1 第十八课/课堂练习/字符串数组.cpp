#include<bits/stdc++.h>
using namespace std;
//×Ö·û´®Êý×é 
const int N = 100;
string s[N];
int res = 0;
bool judge(string s){
	if(s == "one"){
		res = 1;
		return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>s[i];
	}
	for(int i = 0;i<=n;i++){
		if(judge(s[i])){
			cout<<res<<endl;
		}
	}
	return 0; 
} 
