#include<bits/stdc++.h>
using namespace std;
//×Ö·û´®¼õ·¨ É¾³ý 
const int N = 1e5+10; 
char s1[N];
char s2[N];
char tmp[N];
//×Ö·û´®×Ó´®¼ì²â 
int zhao(char *s1,char*s2){
	int i,j,k;
	for( i = 0;i<=strlen(s1)-1;i++){
		if(s1[i]==s2[0]){
			k = 0;
			for(j = i;j<=i+strlen(s2)-1;j++){
				tmp[k++] = s1[j];
			}
			if(strcmp(tmp,s2)==0){
				return i;
			}
		}
	}
	return -1;
}
void shanchu(char *s1,char*s2){
	int res = zhao(s1,s2);
	while(res!=-1){
		for(int i = res+strlen(s2);i<=strlen(s1);i++){
			s1[i-strlen(s2)]=s1[i];
		}
		res = zhao(s1,s2);
	}
} 
int main(){
	fgets(s1,N,stdin);
	fgets(s2,N,stdin);
	s1[strlen(s1)-1] = 0;
	s2[strlen(s2)-1] = 0;
	shanchu(s1,s2);
	cout<<s1<<endl;
	return 0; 
} 		
