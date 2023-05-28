#include<bits/stdc++.h>
using namespace std;
//作业-高精度加法 
const int N = 1e6+10;
int a[N],b[N],res[N];
int main(){
	string s1,s2;
	cin>>s1>>s2;
	a[0] = s1.size();
	b[0] = s2.size();
	for(int i = a[0]-1,j = 1;i>=0;i--,j++)
		a[j] = s1[i]-'0';
	for(int i = b[0]-1,j = 1;i>=0;i--,j++)
		b[j] = s2[i]-'0';
	int n = a[0]>b[0]?a[0]:b[0];
	int s,t = 0;
	for(int i = 1;i<=n;i++){
		s = a[i]+b[i]+t;
		t = s/10;
		res[i] = s%10;
	}
	if(t==1){
		res[n+1] = t;
		res[0]++;
	}
	else
		res[0] = n;
	for(int i = res[0];i>0;i--)
		cout<<res[i];
	return 0; 
} 
