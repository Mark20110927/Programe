#include<bits/stdc++.h>
using namespace std;
//×Ö·û´®µÄ¸´ÖÆ strcpy
const int N = 1e5+10; 
char s1[N];
char s2[N];
int main(){
	fgets(s1,N,stdin);
	s1[strlen(s1)-1] = 0;
	strcpy(s2,s1);
	cout<<s2<<endl;
	
	return 0; 
} 		
