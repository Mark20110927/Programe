#include<bits/stdc++.h> 
using namespace std;
const int N = 1e6+10;
int a[N],b,c[N],res[N],res2[N],yushu;
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
	while(res[n]==0&&n>1) n--;
	res[0] = n;
}
void div(int *a,int b){
	int r = 0;
	for(int i = a[0];i>=1;i--){
		r = r*10+a[i];
		res2[i] = r/b;
		r = r%b;
	}
	yushu = r;
	int n = a[0];
	while(res2[n]==0&&n>1) n--;
	res2[0] = n;
}
int main(){
	string s1,s2;
	cin>>s1>>b>>s2;
	int n1 = s1.size();
	int n2 = s2.size();
	for(int i = n1-1,j = 1;i>=0;i--,j++){
		a[j] = s1[i]-'0';
	}
	a[0] = n1;
	for(int i = n2-1,j = 1;i>=0;i--,j++){
		c[j] = s2[i]-'0';
	}
	c[0] = n2;
	div(a,b);
	sub(res2,c);
	for(int i = res[0];i>1;i--){
		if(res[i]==0){
			res[0]--;
			res[i] = '0';
		}
	}	
	int x = cmp(res2,c);
	if(x==0){
		cout<<"0"<<endl;
		cout<<"ำเสýฃบ"<<endl;
		cout<<yushu<<endl;
	}
	else if(x>0){
		for(int i = res[0];i>=1;i--)
			cout<<res[i];
		cout<<endl<<"ำเสýฃบ"<<endl;
		cout<<yushu<<endl;
	}
	else{
		cout<<"-";
		for(int i = res[0];i>=1;i--)
			cout<<res[i];
		cout<<endl<<"ำเสýฃบ"<<endl;
		cout<<yushu<<endl;
	}
	return 0;
}
