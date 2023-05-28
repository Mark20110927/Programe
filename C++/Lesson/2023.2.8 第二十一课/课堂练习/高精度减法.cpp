#include<bits/stdc++.h>
using namespace std;
//高精度减法 
const int N = 1e5+10;
int a[N],b[N],res[N];
int cmp(int *a,int *b){
	if(a[0]!=b[0])
		return a[0]-b[0];
	for(int i = a[0];i>=1;i--){
		if(a[i]!=b[i])
			return a[i]-b[i];
	}
	return 0;
}
void sub(int *a,int *b){
	int t = 0,tmp;
	for(int i = 1;i<=a[0];i++){
		tmp = a[i]-b[i]-t;
		if(tmp>=0){
			res[i] = tmp;
			t = 0;
		}
		else{
			res[i] = tmp+10;
			t = 1;
		}
	} 
	int n = a[0];
	while(res[n]==0&&n>1)
		n--;
	res[0] = n;
}

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int n1 = s1.size();
	int n2 = s2.size();
	for(int i = n1-1,j = 1;i>=0;i--,j++){
		a[j] = s1[i]-'0';
	}
	a[0] = n1;
	for(int i = n2-1,j = 1;i>=0;i--,j++){
		b[j] = s2[i]-'0';
	}
	b[0] = n2;
	int rv = cmp(a,b);
	if(rv==0)
		cout<<0<<endl;
	else if(rv>0){
		sub(a,b);
		for(int i = res[0];i>=1;i--){
			cout<<res[i];
		}
	} 
	else{
		sub(b,a);
		cout<<"-" ;
		for(int i = res[0];i>=1;i--){
			cout<<res[i];
		}
	}
	return 0; 
} 
