#include<bits/stdc++.h>
using namespace std;
//ººÅµËşÎÊÌâ 
int num = 1;
int hanoi(char a,char b,char c,int n){
	if(n==1){
		cout<<n<<':'<<a<<"->"<<c<<endl;
		return num;
	}
	else{
		hanoi(a,c,b,n-1);
		cout<<n<<':'<<a<<"->"<<c<<endl;
		num++;
		hanoi(b,a,c,n-1);
		num++;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<hanoi('A','B','C',n); 
	return 0; 
} 
