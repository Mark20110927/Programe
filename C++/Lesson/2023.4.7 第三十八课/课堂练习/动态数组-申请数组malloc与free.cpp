#include<bits/stdc++.h>
using namespace std;
//动态数组-申请数组malloc与free 
int main(){
	int n;
	cin>>n;
	int *s = (int *)malloc(sizeof(int));
	*s = n;
	cout<<*s;
	free(s); 
	return 0; 
}
