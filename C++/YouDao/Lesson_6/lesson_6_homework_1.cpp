#include<bits/stdc++.h>
using namespace std;
int a[100005], b[100005], m, n, maxf, sum;
int main(){
    cin >> m >> n;
    for(int i = 1; i <= m; i ++){
        cin >> a[i];
        if(a[i] > maxf) maxf = a[i];
    }
    for(int i = 1; i <= n; i ++) cin >> b[i];
    sort(a + 1, a + 1 + m);
    sort(b + 1, b + 1 + n);
    int l = 0, r = maxf, mid, res;
    for(int i = 1; i <= n; i ++){
        res = 1e6;
        l = 0, r = maxf;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[i] == mid){
                res = 0;
                break;
            }
            else if(a[i] > mid){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    if(l > r){
        if(r < 1) res = a[l] - b[i];
        else if(l > m) res = b[i] - a[r];
        else res = min(abs(a[l] - b[i]), abs(b[i] - a[r]));
    }
        sum += res;
    }
    cout << sum;
    return 0;
}