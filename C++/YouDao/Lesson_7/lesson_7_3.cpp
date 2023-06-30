#include<bits/stdc++.h>
using namespace std;
int b[100005], c[10000];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i ++){
        int l, r;
        cin >> l >> r;
        b[l] ++;
        b[r + 1] --;
    }
    int cnt = 0;
    for(int i = 1; i <= n; i ++){
        cnt += b[i];
        c[cnt] ++;
    }
    for(int i = 1; i <= m; i ++) cout << c[i] << ' ';
    return 0;
}