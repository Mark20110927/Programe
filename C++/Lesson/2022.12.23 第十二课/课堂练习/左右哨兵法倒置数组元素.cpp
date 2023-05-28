#include<bits/stdc++.h>
using namespace std;
//左右哨兵法倒置数组元素 
int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int left = 0,right = 7;
	while(left<right){
		int temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	} 
	cout<<"倒置后:"<<endl;
	for(int i = 0;i<=7;i++){
		cout<<a[i]<<"  ";
	}
	return 0; 
} 
