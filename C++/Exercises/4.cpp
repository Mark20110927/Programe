#include<bits/stdc++.h>
using namespace std;
//买房子
int main(){
	int n1, res = 0, n;
    float b = 200, k;
    cin >> n1 >> k;
    n = n1;
    float a = float(k / 10);
    while(res <= 20){
        res ++;
        if(n >= b && res <= 20) {
            cout << res;
            return 0;
        }
        else if(res > 20){
            cout << "impossible";
            return 0;
        }
        else{
            b *= 1 + a;
            n += n1;
        }
    }
	return 0; 
} 