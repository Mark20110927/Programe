#include<bits/stdc++.h>
using namespace std;
//�ݹ���x��n�η� 
int powf(int x,int n){
	//����
	if(n==1){
		return x;
	} 
	//����
	return x*powf(x,n-1);
}
int main(){
	int n,x;
	cin>>x>>n;
	cout<<powf(x,n)<<endl; 
	return 0; 
} 
