#include<iostream>
using namespace std;
//˳����������� 
int main(){
	int a,b,c;//�������a>b>c 
	cin>>a>>b>>c;
	int tmp;
	if(a<b){//��֤��a>=b 
		tmp=a;a=b;b =tmp;
	}
	if(a<c){//��֤��a>=c
		tmp=a;a=c;c =tmp;
	}
	if(b<c){//��֤��b>=c
		tmp=b;b=c;c =tmp;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0; 
} 
