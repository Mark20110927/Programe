#include<iostream>
using namespace std;
//4个数找最大数  方法是假设 更新法 
int main(){
	int a,b,c,d,maxn;
	cin>>a>>b>>c>>d;
	maxn = a;//假设a最大
	
	if(maxn<b){
		maxn = b;
	}
	if(maxn<c){
		maxn = c;
	}
	if(maxn<d){
		maxn = d;
	} 
	cout<<"最大数为："<<maxn;
	return 0; 
} 
