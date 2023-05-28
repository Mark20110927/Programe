#include<bits/stdc++.h>
using namespace std;
//×÷Òµ-×ÖÄ¸ÅÅĞò 
const int N = 100;
char s[N];
int tmp[N];
int len;
void sort(){
	for(int i = 0;i<len;i++){
		for(int j = 0;j<len-1;j++){
			if(s[j]>s[j+1])
				swap(s[j],s[j+1]);
		}
	}
}
int main(){
	fgets(s,N,stdin);
	len = strlen(s)-1;
	s[len] = '\0';
	sort();
	cout<<s;
	return 0; 
} 
