#include<bits/stdc++.h>
using namespace std;
//��̬����-��������malloc��free 
int main(){
	int n;
	cin>>n;
	int *s = (int *)malloc(sizeof(int));
	*s = n;
	cout<<*s;
	free(s); 
	return 0; 
}
