#include<bits/stdc++.h>
using namespace std;
//高精度加法 
const int N = 1e5+10;
int a[N],b[N],c[N];
void add(int *a,int *b){
	int n  = a[0]>b[0]?a[0]:b[0];
	int t = 0,s;
	for(int i = 1;i<=n;i++){
		s = a[i]+b[i]+t;
		t = s/10;
		c[i] = s%10;
	}
	if(t==1){
		c[n+1] = t;
		c[0] = n+1;
	}
	else
		c[0] = n;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	a[0] = s1.size();
	b[0] = s2.size();
	for(int i = a[0]-1,j = 1;i>=0;i--,j++){
		a[j] = s1[i]-'0';
	}
	for(int i = b[0]-1,j = 1;i>=0;i--,j++){
		b[j] = s2[i]-'0';
	}
	add(a,b);
	for(int i = c[0];i>=1;i--){
		cout<<c[i];
	}
	return 0; 
} 
