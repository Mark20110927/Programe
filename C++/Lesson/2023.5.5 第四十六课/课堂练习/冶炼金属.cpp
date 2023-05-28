#include<bits/stdc++.h>
using namespace std;
//Ò±Á¶½ðÊô 
int main(){
	int n,l,r;
	cin>>n>>l>>r;
	int mx = l/r;
	int mi = l/(r+1)+1;
	n--;
	while(n--){
		cin>>l>>r;
		mi = max(mi,l/(r+1)+1);
		mx = min(mx,l/r);
	} 
	cout<<mi<<' '<<mx;
	return 0; 
} 
