#include<bits/stdc++.h>
using namespace std;
//动态数组-申请数组malloc与free(常用写法）
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
