#include<bits/stdc++.h>
using namespace std;
//��̬����-��������malloc��free(����д����
struct ST1{
	char a;
	char b;
	int m;
}; 
struct ST2{
	char a;
	int m;
	char b;
}; 
int main(){
	cout<<sizeof(ST1)<<endl;
	cout<<sizeof(ST2)<<endl;
	return 0; 
}
