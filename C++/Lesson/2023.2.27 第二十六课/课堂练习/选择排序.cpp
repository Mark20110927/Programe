#include<bits/stdc++.h>
using namespace std;
//—°‘Ò≈≈–Ú
const int N = 1e6+10;
int a[N],n;
void select_sort(){
	for(int i = 1;i<=n-1;i++){
		for(int j = i+1;j<=n;j++){
			if(a[j]<a[i])
				swap(a[i],a[j]);
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
