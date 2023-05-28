#include<bits/stdc++.h>
using namespace std;
//×Ö·û´®×Ó´®¼ì²â  
const int N = 1e5+10; 
char s1[N];
char s2[N];
char tmp[N];
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
int main(){
	fgets(s1,N,stdin);
	fgets(s2,N,stdin);
	s1[strlen(s1)-1] = 0;
	s2[strlen(s2)-1] = 0;
	cout<<zhao(s1,s2)<<endl;
	return 0; 
} 		
