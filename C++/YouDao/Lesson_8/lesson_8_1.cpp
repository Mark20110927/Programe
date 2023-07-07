#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[10005];
bool check(int n){
    int sum = 0;
    for(int i = 1; i <= n ;i ++){
        sum += a[i] / n;
    }
    return sum >= k;
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int minf = a[1];
    int l = 1, mid, r = minf, ans = 0;
    while(l <= r){
        mid = (l + r) / 2;
        if(check(mid)){
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
    }
    cout << ans;
    return 0;
}