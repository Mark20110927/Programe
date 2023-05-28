#include<bits/stdc++.h>
using namespace std;
//×Ö·û´®ÅÅÐò
const int N = 1e3;
string s[N];
bool cmp(string a,string b){
	for(int i= 0;i<=a.size()&&i<=b.size();i++){
		if(a[i]!=b[i])
			return a[i]<b[i];
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>s[i];
	sort(s+1,s+1+n,cmp);
	for(int i = 1;i<=n;i++)
		cout<<s[i]<<' ';
	return 0; 
} 
