#include<bits/stdc++.h>
using namespace std;
bool a[105][105];
int b[105][105];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
        for(int j = 1; j <= m; j ++){
            char c;
            cin >> c;
            if(c == '*') a[i][j] = true;
            else a[i][j] = false;
        }
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            if(!a[i][j]){
                int t = a[i][j - 1] + a[i][j + 1] + a[i - 1][j] + a[i + 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j + 1];
                cout << t;
            }
            else cout << '*';
        }
        cout << endl;
    }
    return 0;
}