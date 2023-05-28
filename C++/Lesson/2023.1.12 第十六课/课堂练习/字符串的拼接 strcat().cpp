#include<bits/stdc++.h>
using namespace std;
//×Ö·û´®µÄÆ´½Ó strcat() 
const int N = 1e5;
char s1[N];
char s2[N];
int main(){
	fgets(s1,N,stdin);
	s1[strlen(s1)-1] = 0;
	fgets(s2,N,stdin);
	s2[strlen(s2)-1] = 0;
	strcat(s1,s2);
	cout<<s1<<endl;
	return 0; 
} 
