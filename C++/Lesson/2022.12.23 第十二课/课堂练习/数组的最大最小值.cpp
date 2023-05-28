#include<bits/stdc++.h>
using namespace std;
//数组的最大最小值 
int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int max = 0,min = 999999999;
	for(int i = 0;i<=7;i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	} 
	cout<<"最小值是："<<min<<endl;
	cout<<"最大值是："<<max<<endl;
	return 0; 
} 
