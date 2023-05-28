#include<bits/stdc++.h>
using namespace std;
//求立方根
const double jd = 1e-7;
 
int main(){
	double n;
	cin>>n;
	double l = -10000,r = 10000,mid;
	while(r-l>jd){
		mid = (r+l)/2;
		if(mid*mid*mid>n)
			r = mid;
		else
			l = mid;
	}
	cout<<fixed<<setprecision(6)<<mid<<endl;
	cout<<fixed<<setprecision(6)<<l<<endl;
	cout<<fixed<<setprecision(6)<<r<<endl;
} 
