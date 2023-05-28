#include<bits/stdc++.h>
using namespace std;
//阶乘求和 
//求阶乘
int jc(int n){
	int res = 1;
	for(int i = n;i>=1;i--){
		res*=i;
	}
	return res;
} 
//阶乘求和 
int jcsum(int n){
	int sum = 0;
	for(int i = 0;i<=n;i++){
		sum+=jc(i);
	}
	return sum; 
}
int main(){
	int n;
	cin>>n;
	cout<<jcsum (n)<<endl;
	return 0; 
} 
