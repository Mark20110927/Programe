#include<bits/stdc++.h>
using namespace std;
//×÷Òµ_Ñ¡ÔñÅÅÐò-select_sort
const int N = 1000;
int a[N],n; 
void select_sort(){
	for(int i = 1;i<=n-1;i++){
		for(int j = i+1;j<=n;j++){
			if(a[j]<a[i])
				swap(a[j],a[i]);
		}
	} 
}
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	select_sort();
	for(int i = 1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0; 
} 
