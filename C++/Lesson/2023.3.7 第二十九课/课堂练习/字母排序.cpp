#include<bits/stdc++.h>
using namespace std;
//×ÖÄ¸ÅÅĞò 
const int N  = 1e5;
char s[N];
int main(){
	fgets(s,N,stdin);
	sort(s,s+strlen(s));
	cout<<s;
	return 0; 
}
