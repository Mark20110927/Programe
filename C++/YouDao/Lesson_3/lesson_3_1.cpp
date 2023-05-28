#include<bits/stdc++.h>
using namespace std;
long long num[1005];
int main(){
	int n;
    cin >> n;
    num[1] = 1;
    num[2] = num[3] = 2;
    for(int i = 4;i <= n;i ++){
        if(i % 2 == 0)
            num[i] = num[i - 1]+num[i / 2];
        else
            num[i] = num[i -1]; 
    }
    cout << num[n];
	return 0; 
} 
