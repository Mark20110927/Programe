#include<bits/stdc++.h>
using namespace std;
//ÊÖÐ´×Ö·û´®µÄÆ´½Ó
const int N = 1e5;
char s1[N];
char s2[N];
void mystrcat(char *s1,char *s2){
	for(int i = strlen(s1),j = 0;j<=strlen(s2);i++,j++){
		s1[i] = s2[j];
	} 
}
int main(){
	fgets(s1,N,stdin);
	s1[strlen(s1)-1] = 0;
	fgets(s2,N,stdin);
	s2[strlen(s2)-1] = 0;
	mystrcat(s1,s2);
	cout<<s1<<endl;
	return 0; 
} 
