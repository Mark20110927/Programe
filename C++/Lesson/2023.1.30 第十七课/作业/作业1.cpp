#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
char x[N];
char y[N];
char tmp[N];
int find(char *a,char *b){
	int i,j,t;
	for(i = 0;i<=strlen(a)-1;i++){
		if(a[i]==b[0]){
			t = 0;
			for(j = i;j<=i+strlen(b)-1;j++){
				tmp[t++] = a[j];
			}
			if(strcmp(tmp,b)==0){
				return i;
			}
		}
	}
	return -1;
}
int main(){
	fgets(x,N,stdin);
	fgets(y,N,stdin);
	x[strlen(x)-1] = 0;
	y[strlen(y)-1] = 0;
	cout<<find(x,y)<<endl;
	return 0; 
} 
