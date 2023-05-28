#include<bits/stdc++.h>
using namespace std;
//×÷Òµ-½×³Ë 
int main(){
	int n;
	cin>>n;
	int sum = 1,tmp = 1;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			tmp*=j;
		}
		sum+=tmp;
		tmp = 1;
	}
	cout<<sum-1;
	return 0; 
} 
