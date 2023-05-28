#include<bits/stdc++.h>
using namespace std;
//字符串的特殊复制  只要字母 
const int N = 1e5+10; 
char s1[N];
char s2[N];
void my_strcpy(char *s1,char *s2){
	for(int i = 0,j = 0;i<=strlen(s2);i++){
		if(s2[i]<='z'&&s2[i]>='a'||s2[i]<='Z'&&s2[i]>='A'){
			s1[j++] = s2[i];
		}
	}
}
int main(){
	fgets(s1,N,stdin);
	s1[strlen(s1)-1] = 0;
	cout<<s1<<endl;
	my_strcpy(s2,s1);
	cout<<s2<<endl;
	
	return 0; 
} 		
