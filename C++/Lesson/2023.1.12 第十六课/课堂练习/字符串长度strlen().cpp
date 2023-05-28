#include<bits/stdc++.h>
using namespace std;
//×Ö·û´®³¤¶Èstrlen() 
const int N = 1e5;
char s1[N];

int main(){
	fgets(s1,N,stdin);
	s1[strlen(s1)-1] = 0;
	cout<<strlen(s1)<<endl;
	return 0; 
} 
