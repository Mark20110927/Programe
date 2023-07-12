#include<bits/stdc++.h>
using namespace std;
int a[25005], b[25005], n, x, y;
int main(){
    cin >> n >> x >> y;
    for(int i = 1; i <= n; i ++) cin >> a[i] >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        sum += a[i] > b[i] ? (a[i] - b[i]) * y : (b[i] - a[i]) * x;
    }
    cout << sum;
    return 0;
}