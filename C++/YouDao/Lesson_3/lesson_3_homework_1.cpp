#include<bits/stdc++.h>
using namespace std;
int mapf[10][10], dp[10][10];
int main() {
    int n;
    cin >> n;
    int x, y, z;
    while (true) {
        cin >> x >> y >> z;
        if (!x && !y && !z) break;
        mapf[x][y] = z;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]) + mapf[i][j];
        }
    }
    cout << dp[1][1];
    return 0;
}
