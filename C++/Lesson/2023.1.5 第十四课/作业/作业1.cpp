#include<bits/stdc++.h>
using namespace std;
//gcd:最大公因数
//lcm:最小公倍数 
int gcd(int gcd1,int gcd2){
//	if(gcd1<gcd2){
//		int temp = gcd1;
//		gcd1 = gcd2;
//		gcd2 = temp;
//	} 
	int r = 0;
	r = gcd1>gcd2?gcd2:gcd1;
	while(r>=1){
		if(gcd1%gcd2==0&&gcd2%r==0){
			break;
		}
		r--;
	}
	if(r == 0) 
		r = r+1;
	return(r); 
} 
int lcm(int lcm1,int lcm2){
	int r;
	if(lcm1<lcm2){
		int temp = lcm1;
		lcm1 = lcm2;
		lcm2 = temp;
	} 
	for(int i = lcm1;;i+=lcm1){
		if(i%lcm2 ==0){
			r = i;
			break;
		}	
	}
	while(r<1){
		r*10;
	}
	return(r);
} 
int main(){
	int x,y;
	cout<<"请输入两个数!"<<endl;
	cin>>x>>y;
	cout<<x<<","<<y<<"的最大公因数是"<<gcd(x,y)<<endl;
	cout<<x<<","<<y<<"的最小公倍数是"<<lcm(x,y)<<endl;
	return 0; 
} 
