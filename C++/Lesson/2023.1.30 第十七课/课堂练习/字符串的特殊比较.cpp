#include<bits/stdc++.h>
using namespace std;
//字符串的特殊比较  
const int N = 1e5+10; 
char s1[N];
char s2[N];
int my_strcmp(char *s1,char*s2){
	for(int i = 0,j = 0;i<=strlen(s1)&&j<=strlen(s2);i++,j++){
		if(s1[i]!=s2[j]){
			return(s1[i]-s2[j]);
		}
		return 0;
	}
}
int main(){
	fgets(s1,N,stdin);
	fgets(s2,N,stdin);
	s1[strlen(s1)-1] = 0;
	s2[strlen(s2)-1] = 0;
	int res = my_strcmp(s1,s2);
	if(res==0)
		cout<<"s1与s2相同，比较结果是："<<res<<endl;
	else if(res<0)
		cout<<"s1比s2小，比较结果是："<<res<<endl;
	else
		cout<<"s1比s2大，比较结果是："<<res<<endl;
	return 0; 
} 		
