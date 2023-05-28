#include<bits/stdc++.h>
using namespace std;
int a[10][10], dp[10][10];
int main(){
    int n;
    cin >> n;
    int x, y, z;
    while(true){
        cin >> x >> y >> z;
        if(!x && !y && !z) break;
        a[x][y] = z;
    }
    for(int  i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }
    cout << dp[n][n];
    return 0;
}