#include<iostream>
using namespace std;
//顺序输出三个数 
int main(){
	int a,b,c;//假设最后a>b>c 
	cin>>a>>b>>c;
	int tmp;
	if(a<b){//保证了a>=b 
		tmp=a;a=b;b =tmp;
	}
	if(a<c){//保证了a>=c
		tmp=a;a=c;c =tmp;
	}
	if(b<c){//保证了b>=c
		tmp=b;b=c;c =tmp;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0; 
} 
