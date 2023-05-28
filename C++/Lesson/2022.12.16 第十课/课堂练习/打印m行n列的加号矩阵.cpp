#include<iostream>
using namespace std;
//打印m行n列加号矩阵 
int main(){
	int hang,lie;
	cin>>hang>>lie;
	for(int i = 1;i<=hang;i++){
		for(int j = 1;j<=lie;j++){
			cout<<'+';
		}
		cout<<endl;
	} 
	return 0; 
} 
