#include<bits/stdc++.h>
using namespace std;
//ศýิชื้ลละ๒ 
const int N = 1e5+10;
struct Three{
	int a;
	double b;
	string c;
}t[N];
bool cmp(Three a,Three b){
		return a.a<b.a;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>t[i].a>>t[i].b>>t[i].c;
	sort(t+1,t+n+1,cmp);
	cout<<endl;
	for(int i = 1;i<=n;i++)
		cout<<t[i].a<<' '<<t[i].b<<' '<<t[i].c<<endl; 
	return 0; 
} 
