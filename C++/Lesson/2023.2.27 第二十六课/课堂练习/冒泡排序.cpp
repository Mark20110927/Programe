#include<bits/stdc++.h>
using namespace std;
//ц╟ещеепР
const int N = 1e6+10;
int a[N],n; 
void bubble_sort(){
	for(int i = 1;i<=n-1;i++){
		for(int j = 1;j<=n-i;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	bubble_sort();
	for(int i = 1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0; 
} 
