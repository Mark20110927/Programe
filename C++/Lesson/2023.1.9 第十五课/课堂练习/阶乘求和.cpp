#include<bits/stdc++.h>
using namespace std;
//�׳���� 
//��׳�
int jc(int n){
	int res = 1;
	for(int i = n;i>=1;i--){
		res*=i;
	}
	return res;
} 
//�׳���� 
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
