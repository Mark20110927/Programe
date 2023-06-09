#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, maxf = 0, res;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        int c;
        cin >> a >> b;
        c = a - b;
        if (c > maxf){
            maxf = c;
            res = i;
        }  
    }
    cout << res;
    return 0;
}