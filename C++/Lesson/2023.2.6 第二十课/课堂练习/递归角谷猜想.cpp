#include<bits/stdc++.h>
using namespace std;
//�ݹ�ǹȲ���
void jiaogu(int n){
	if(n==1)
		return;
	if(n%2==1){
		cout<<"    "<<n<<"��3+1="<<n*3+1<<endl; 
		jiaogu(3*n+1);
	}
	else{
		if(n%2==0){
		cout<<"    "<<n<<"��2="<<n/2<<endl; 
		jiaogu(n/2);
	}
	}
}
int main(){
	int n;
	cin>>n;
	jiaogu(n);
	return 0; 
} 
