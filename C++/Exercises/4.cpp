#include<bits/stdc++.h>
using namespace std;
//买房子
int main(){
	int n, k, res = 0, b = 200;
    cin >> n >> k;
    float a = k / 100;
    while(res <= 20){
        res ++;
        if(n >= b) break;
        else b *= 1 + a;
    }
    if(res <= 20) cout << res;
    else cout << "impossible";
	return 0; 
} 