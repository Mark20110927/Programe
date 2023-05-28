#include<bits/stdc++.h>
using namespace std;
//
void paper_size(int n){
	int c,k,lc,lk;
	for(int i = 0;i<=n;i++){
		if(i==0){
			c = 1189;
			k = 841;
		}
		else{
			lc = c;
			c = k;
			k = lc/2;
		}
	}
	cout<<c<<"mm "<<k<<"mm";
}
int main(){
	char c;
	int n;
	cin>>c>>n;
	cout<<n<<endl;
	paper_size(n);
	return 0; 
} 
