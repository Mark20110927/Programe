#include<bits/stdc++.h>
using namespace std;
const double jd = 1e-6;
int main(){
	double a;
	cin>>a;
	double l = 0,r = 10000,mid;
	while(r-l>jd){
		mid = (l+r)/2;
		if(mid*mid>a)
			r = mid;
		else
			l = mid;
	}
	cout<<fixed<<setprecision(4)<<mid<<endl;
	return 0; 
} 
