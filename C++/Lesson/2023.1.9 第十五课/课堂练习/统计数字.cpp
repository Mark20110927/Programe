#include<bits/stdc++.h>
using namespace std;
//ͳ������
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
		cout<<"����"<<i<<"��"<<a[i]<<"����"<<endl;
	}
	return 0; 
} 
