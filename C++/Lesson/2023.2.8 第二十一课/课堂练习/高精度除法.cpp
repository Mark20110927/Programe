#include<bits/stdc++.h>
using namespace std;
//高精度除法 
const int N = 1e5+10;
int a[N],b,res[N],yushu;

void div(int *a,int b){
	int r = 0;
	for(int i = a[0];i>=1;i--){
		r = r*10+a[i];
		res[i] = r/b;
		r = r%b;
	}
	yushu = r;
	int n = a[0];
	while(res[n]==0&&n>1) n--;
	res[0] = n;
}
int main(){
	string s1;
	cin>>s1>>b;
	a[0] = s1.size();
	for(int i = a[0]-1,j = 1;i>=0;i--,j++){
		a[j] = s1[i]-'0';
	}
	div(a,b);
	cout<<"商："<<endl;
	for(int i = res[0];i>=1;i--){
		cout<<res[i];
	}
	cout<<endl;
	cout<<"余数："<<endl;
	cout<<yushu<<endl;
	return 0; 
} 
