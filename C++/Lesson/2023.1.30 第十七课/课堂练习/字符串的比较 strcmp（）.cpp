#include<bits/stdc++.h>
using namespace std;
//字符串的比较 strcmp（） 
const int N = 1e5+10; 
char s1[N];
char s2[N];

int main(){
	fgets(s1,N,stdin);
	fgets(s2,N,stdin);
	s1[strlen(s1)-1] = 0;
	s2[strlen(s2)-1] = 0;
	int res = strcmp(s1,s2);
	if(res==0)
		cout<<"s1与s2相同，比较结果是："<<res<<endl;
	else if(res<0)
		cout<<"s1比s2小，比较结果是："<<res<<endl;
	else
		cout<<"s1比s2大，比较结果是："<<res<<endl;
	return 0; 
} 		
