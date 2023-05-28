#include<bits/stdc++.h>
using namespace std;
//高精度乘法高精度乘高精度 
const int N = 1e5+10;
int a[N],b[N],c[N];
int s; 
void mul(int *a,int *b){
	for(int i = 1;i<=a[0];i++){
		for(int j = 1;j<=b[0];j++){
			c[i+j-1] = a[i]*b[j];
			c[i+j] = c[i+j-1]/10;
			c[i+j-1]%=10;
		}
	}
	//去先导0
	int n = a[0]+b[0];
	while(c[n]==0&&n>1)
		n--;
	c[0] = n;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	a[0] = s1.size();
	for(int i = a[0]-1,j = 1;i>=0;i--,j++)
		a[j] = s1[i]-'0';
	b[0] = s2.size();
	for(int i = b[0]-1,j = 1;i>=0;i--,j++)
		b[j] = s2[i]-'0';
//	for(int i = 1;i<=a[0];i++)
//		cout<<a[i];
//	cout<<endl;
//	for(int i = 1;i<=b[0];i++)
//		cout<<b[i];
	mul(a,b);
	for(int i = c[0];i>0;i--)
		cout<<c[i];
	return 0; 
} 
