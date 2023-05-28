#include<bits/stdc++.h>
using namespace std;
//高精度乘法 
const int N = 1e5+10;
int a[N],b,c[N];
void mul(int *a,int b){
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
	string s;
	cin>>s>>b;
	a[0] = s.size();
	for(int i = a[0]-1,j = 1;i>=0;i--,j++){
		a[j] = s[i]-'0';
	} 
	mul(a,b);
	for(int i = c[0];i>=1;i--){
		cout<<c[i];
	}
	return 0; 
}  
