#include<bits/stdc++.h>
using namespace std;
//最小公倍数与最大公因数
//最小公倍数
int lcm(int x,int y){
	if(x<y)
		swap(x,y);
	for(int i = x;;i+=x){
		if(i%y==0)
			return i;
	}	
}
//最大公因数
//小数往下循环
int gcd(int x,int y){
	int m = x>y?y:x;
	for(int i = m;i>=1;i--){
		if(x%i==0&&y%i==0)
			return i;
	}
} 
//欧几里得法 辗转相除法 
int Euclid(int x,int y) {
	int m= x%y;
	while(m!=0){
		x = y;
		y = m;
		m = x%y;
	}
	return y; 
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<lcm(x,y)<<endl;
	cout<<gcd(x,y)<<endl;
	cout<<Euclid(x,y)<<endl;
	return 0; 
} 
