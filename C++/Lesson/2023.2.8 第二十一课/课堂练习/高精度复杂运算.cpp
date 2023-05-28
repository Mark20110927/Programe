#include<bits/stdc++.h>
using namespace std;
//高精度(A+B)*c/d-E
//void add(int *a,int *b)
//void mul(int *a,int *b)
//void div(int *a,int b)
//void sub(int *a,int b) 
const int N = 1e5+10;
int a[N],b[N],c,res[N],yushu;
bool yushuf = false;
void clear(int *a){
	for(int i = 0;i<N;i++)
		a[i] = 0;	
}
void cpy(int *a,int *b){
	for(int i = 0;i<=b[0];i++){
		a[i] = b[i];
	}
}
void add(int *a,int *b){
	int n = max(a[0],b[0]); 
	int t = 0;
	for(int i = 1;i<=n;i++){
		t+=a[i]+b[i];
		res[i] = t%10;
		t/=10;
	}
	if(t==0)
		res[0] = n;
	else{
		res[0] = n+1;
		res[n+1] = 1; 
	}
} 
void mul(int *a,int b){
	int t = 0;
	for(int i = 1;i<=a[0];i++){
		t = a[i]*b+t;
		res[i] = t%10;
		t/=10; 
	}
	if(t==0)
		res[0] = a[0];
	else{
		int k = 1,n = a[0];
		while(t!=0){
			res[n+k] = t%10;
			t/=10;
			k++;
		} 
		res[0] = n+k-1;
	}
}
void div(int *a,int b){
	int s,r = 0;
	for(int i = a[0];i>=1;i--){
		s = r*10+a[i];
		res[i] = s/b;
		r = s%b;
	}
	yushu = r;
	//去除先导0
	int n = a[0];
	while(res[n]==0&&n>1) 
		n--;
	res[0] = n; 
	if(r!=0)
		yushuf = true;
}
void sub(int *a,int *b){
	int t = 0;
	for(int i = 1;i<=a[0];i++){
		t = a[i]-b[i]-t;
		if(t>=0){
			res[i] = t;
			t = 0;
		}
		else{
			res[i] = t+10;
			t = 1;
		}
	}
	int n = a[0];
	while(res[n]==0&&n>1) n--;
	res[0] = n;
}
int cmp(int *a,int *b){
	if(a[0]!=b[0])
		return a[0]-b[0];
	for(int i = a[0];i>=1;i--){
		if(a[i]!=b[i])
			return a[i]-b[i]; 
	} 
	return 0;
}
int main(){
//-------------------------------------------------加法
	string s1,s2;
	cin>>s1>>s2;
	a[0] = s1.size();
	for(int i = a[0]-1,j = 1;i>=0;i--,j++){
		a[j] = s1[i]-'0';
	}
	b[0] = s2.size();
	for(int i = b[0]-1,j = 1;i>=0;i--,j++){
		b[j] = s2[i]-'0';
	}
	add(a,b);
	cout<<"A+B=";
	for(int i = res[0];i>=1;i--)
		cout<<res[i];
	cout<<endl;
//-------------------------------------------------乘法
	//清零
	clear(a); 
	//拷贝 
	cpy(a,res);
	clear(res);
	cin>>c;
	mul(a,c);
	cout<<"(A+B)×c=";
	for(int i = res[0];i>=1;i--)
		cout<<res[i];
	cout<<endl;
//-------------------------------------------------除法
	clear(a); 
	cpy(a,res);
	clear(res);
	cin>>c;
	div(a,c);
	cout<<"(A+B)×c÷d=";
	for(int i = res[0];i>=1;i--)
		cout<<res[i];
	if(yushu)
		cout<<"......"<<yushu<<endl;
	else
		cout<<endl;
//-------------------------------------------------减法
	clear(a); 
	cpy(a,res);
	clear(res);
	cin>>s2;
	clear(b);
	b[0] = s2.size();
	for(int i = b[0]-1,j = 1;i>=0;i--,j++){
		b[j] = s2[i]-'0';
	}
	int v = cmp(a,b);
	if(v==0){
		cout<<"(A+B)*c/d-E=";
		cout<<"0";
		if(yushu)
			cout<<"......"<<yushu<<endl;
	}
	else if(v>0){
		sub(a,b);
		cout<<"(A+B)*c/d-E=";
		for(int i = res[0];i>=1;i--)
			cout<<res[i];
		if(yushu)
			cout<<"......"<<yushu<<endl;
	}
	else{
		sub(b,a);
		cout<<"(A+B)*c/d-E="<<"-";
		for(int i = res[0];i>=1;i--)
			cout<<res[i];
		if(yushu)
			cout<<"......"<<yushu<<endl;
	}
	return 0; 
} 
