#include<bits/stdc++.h>
using namespace std;
//��ҵ-���ű�����_��һ�� 
int num[5]; 
int main(){
	cin>>num[2];
	num[1] = num[2]-1;
	num[3] = num[2]+1;
	cout<<num[1]+num[3]<<endl;
	return 0; 
} 
