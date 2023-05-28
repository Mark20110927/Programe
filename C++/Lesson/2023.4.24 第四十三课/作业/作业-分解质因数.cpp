#include<bits/stdc++.h>
using namespace std;
//作业-分解质因数 
int maxf;
bool zhishu(int n){
	for(int i = 1;i<n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n/2;i++){
		if(n%i!=0)	
			continue;
		int r = n/i;
		if(zhishu(i)&&zhishu(r)){
			if(i>maxf)
				maxf = i;
			if(r>maxf)
				maxf = r; 
		}
	} 
	cout<<maxf;
	return 0; 
} 
