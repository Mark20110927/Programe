#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
char x[N];
void change(char *a){
	if(!(a[0]>=65&&a[0]<=96))
		a[0]=char(a[0]-32); 
	for(int i = 1;i<=strlen(a)-1;i++){
		if(a[i-1]==' '){
			if(!(a[i]>=65&&a[i]<=96)){
				a[i]=char(a[i]-32);
			}
		}
		else if(a[i]>=65&&a[i]<=96)
			a[i]=char(a[i]+32);
	}
}
int main(){
	fgets(x,N,stdin);
	x[strlen(x)-1] = 0;
	change(x);
	cout<<x<<endl;
	return 0; 
} 
