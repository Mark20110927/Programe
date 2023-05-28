#include<bits/stdc++.h>
using namespace std;
//ÊÖÐ´×Ö·û´®³¤¶È
const int N = 1e5;
char s1[N];
int mystrlen(char *s1){
	int len;
	for(len = 0;s1[len]!=0&&s1[len]!='\n';len++){};
	return len;
}
int main(){
	fgets(s1,N,stdin);
	cout<<mystrlen(s1)<<endl;
	return 0; 
} 
