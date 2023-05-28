#include<bits/stdc++.h>
using namespace std;
//Ë«Ö¸ÕëËã·¨ 
int a[] = {1,3,5,7,9};
int b[] = {2,4,6,8,10};
int res[100];
int main(){
	int i = 0,j = 0,k = 0;
	while(i<=4&&j<=4){
		if(a[i]<b[j])
			res[k++] = a[i++];
		else
			res[k++] = b[j++]; 
	}
	while(i<=4) res[k++] = a[i++];
	while(j<=4) res[k++] = b[j++];
	for(int i = 0;i<=k-1;i++)
		cout<<res[i]<<" ";
	return 0; 
} 
