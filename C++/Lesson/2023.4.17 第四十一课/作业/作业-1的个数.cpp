#include<bits/stdc++.h>
using namespace std;
//��ҵ-1�ĸ��� 
int main(){
	int n,res = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(i==1)
			res++;
		else{
			int x = i;
			while(x%10!=0){
				if(x!=i){
					if(x%10==1)
						res++;
					x/=10;
				}
			}
		}
	} 
	cout<<res;
	return 0; 
} 
