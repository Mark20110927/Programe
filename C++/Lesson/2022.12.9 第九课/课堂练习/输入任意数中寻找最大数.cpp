#include<iostream>
using namespace std;
//输入任意数中寻找最大数 
int main(){
	//假设#就是结束符号
	int maxn = 0,n;
	cin>>n;
	while(n!=0){
		if(maxn<n)
			maxn=n;
		cin>>n;
	} 
	cout<<"最大的数字是"<<maxn<<endl;
	return 0; 
} 
