#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    int n, q, x, y;
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    cin >> q;
    for(int i = 1; i <= q; i ++){
        int sum = 0;
        cin >> x >> y;
        for(int j = x; i <= y; i ++) sum += a[x];
        cout << sum;
    }
    return 0;
}