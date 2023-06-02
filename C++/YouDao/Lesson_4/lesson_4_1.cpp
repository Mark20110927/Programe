#include<bits/stdc++.h>
using namespace std;
long long a[15][15], f[15][15], n, en;

int main(){
    cin >> en >> n;
    while(true){
        int x, y, z;
        cin >> x >> y >> z;
        if(!x && !y && !z) break;
        a[x][y] = z;
    }
    for(int i = 1; i <= n; i ++){
        for(int j = n; j >= 1; j --){
            f[i][j] = max(f[i - 1][j],f[i][j + 1]) + a[i][j];
        }
    }
    if(en >= f[n][1]) cout << f[n][1];
    else cout << "no";
    return 0;
}