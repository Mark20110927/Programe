#include<bits/stdc++.h>
using namespace std;
//�����ڱ�����������Ԫ�� 
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
	cout<<"���ú�:"<<endl;
	for(int i = 0;i<=7;i++){
		cout<<a[i]<<"  ";
	}
	return 0; 
} 
