#include<bits/stdc++.h>
using namespace std;
//×÷Òµ_Ã°ÅÝÅÅÐò-bubble_sort
const int N = 1000;
int a[N],n;
void bubble_sort(){
	for(int i  = 1;i<=n-1;i++){
		for(int j = 1;j<=n-i;j++){
			if(a[j+1]<a[j])
				swap(a[j+1],a[j]);
		}
	}
} 
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	bubble_sort();
	for(int i = 1;i<=n;i++)
		cout<<" "<<a[i];
	return 0; 
} 
