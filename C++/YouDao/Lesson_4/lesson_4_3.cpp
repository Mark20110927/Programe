#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int b[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int main(){
    int n, m;
    cin >> n >>  m;
    int x = 1, y = 1, num = 0, cnt1 = 0, cnt2 = 0, d = 0;
    while(cnt1 < n * 2 + m *2 - 4){
        num ++;
        a[x][y] = num;
        cnt1 ++;
        if(x + b[d][0] < 1 || x + b[d][0] > n || y + b[d][1] < 1 || y + b[d][1] > m) d = d + 1;
        x += b[d][0];
        y += b[d][1];
    }
    x = 3, y = 3, d = 0;
    while(cnt2 < (n - 4)  * 2 + (m - 4) * 2 - 4){
        num ++;
        a[x][y] = num;
        cnt2 ++;
        if(x + b[d][0] < 3 || x + b[d][0] > n - 2 || y + b[d][1] < 3 || y + b[d][1] > m - 2) d = d + 1;
        x += b[d][0];
        y += b[d][1];
    }
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            if(a[i][j]) cout << setw(3) << a[i][j];
            else cout << "   ";
        }
        cout << endl;
    }
    
    return 0;
}