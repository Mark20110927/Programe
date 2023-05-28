#include<bits/stdc++.h>
using namespace std;
//×÷Òµ_²åÈëÅÅĞò-insert_sort
const int N = 1000;
int a[N],n; 
void insert_sort(){
	for(int i = 2;i<=n;i++){
		for(int j = i;j>=2;j--){
			if(a[j-1]>a[j])
				swap(a[j-1],a[j]);
			else
				break;
		}
	}
} 
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	insert_sort();
	for(int i = 1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0; 
}  
