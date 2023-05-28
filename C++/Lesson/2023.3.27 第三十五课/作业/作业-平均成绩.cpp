#include<bits/stdc++.h>
using namespace std;
//作业-平均成绩 
const int N = 100;
int score[N];
int main(){
	int n;
	double res;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>score[i];
		res+=score[i];
	}
	res/=n;
	cout<<fixed<<setprecision(2)<<res;
	return 0; 
} 
