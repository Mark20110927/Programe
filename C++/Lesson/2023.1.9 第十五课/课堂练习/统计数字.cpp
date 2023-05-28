#include<bits/stdc++.h>
using namespace std;
//统计数字
void tongji(int n,int p[]){//int p[]
	int m;
	if(n==0){
		p[0]++;
	}
	while(n!=0){
		m = n%10;
		p[m]++;
		n/=10;
	}
	
}
int main(){
	int a[100] = {};
	int n;
	cin>>n;
	tongji(n,a);
	for(int i = 0;i<=9;i++){
		cout<<"数字"<<i<<"有"<<a[i]<<"个。"<<endl;
	}
	return 0; 
} 
