#include<bits/stdc++.h>
using namespace std;
//��С���������������
//��С������
int lcm(int x,int y){
	if(x<y)
		swap(x,y);
	for(int i = x;;i+=x){
		if(i%y==0)
			return i;
	}	
}
//�������
//С������ѭ��
int gcd(int x,int y){
	int m = x>y?y:x;
	for(int i = m;i>=1;i--){
		if(x%i==0&&y%i==0)
			return i;
	}
} 
//ŷ����÷� շת����� 
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
