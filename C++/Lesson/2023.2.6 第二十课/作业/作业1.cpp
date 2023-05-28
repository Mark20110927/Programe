#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N],b[N],c,d[N];
void add(int *a,int *b,int *c){
	int n = a[0]>b[0]?a[0]:b[0];
	int t = 0;
	for(int i = 1;i<=n;i++){
		t += a[i] + b[i];
		c[i] = t%10;
		t /= 10;
	}
	if(t==1){
		c[n+1] = t;
		c[0] = n+1;
	}
	else
		c[0] = n;
}
void mul(int *a,int b,int *c){
	int t = 0,s;
	for(int i = 1;i<=a[0];i++){
		s = t+a[i]*b;
		c[i] = s%10;
		t = s/10;
	}
	if(t==0)
		c[0] = a[0];
	else{
		int k = 1;
		while(t!=0){
			c[a[0]+k] = t%10;
			k++;
			t/=10;
		}
		c[0] = a[0]+k-1;
	}
}
int main(){
	string s1,s2;
	cin>>s1>>s2>>c;
	a[0] = s1.size();
	b[0] = s2.size();
	for(int i = a[0]-1,j = 1;i>=0;i--,j++){
		a[j] = s1[i]-'0';
	}
	for(int i = b[0]-1,j = 1;i>=0;i--,j++){
		b[j] = s2[i]-'0';
	}
	add(a,b,d);
	for(int i = 0;i<=s1.size();i++)
		a[i] = 0;
	mul(d,c,a);
	for(int i = a[0];i>=1;i--){
		cout<<a[i];
	} 
	return 0; 
} 
