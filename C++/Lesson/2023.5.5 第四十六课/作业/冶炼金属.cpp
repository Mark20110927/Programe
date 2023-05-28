#include<bits/stdc++.h>
using namespace std;
//Ò±Á¶½ðÊô 
int main(){
	int n,a,b;
	cin>>n;
	cin>>a>>b;
	int mini = a/(b+1)+1;
	int maxf = a/b;
	n--;
	while(n--){
		cin>>a>>b;
		mini = max(mini,a/(b+1)+1);
		maxf = min(maxf,a/b);
	} 
	cout<<mini<<' '<<maxf;
	return 0; 
} 
