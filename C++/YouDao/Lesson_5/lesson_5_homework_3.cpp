#include<bits/stdc++.h>
using namespace std;
int n, a[10005], x;
int main(){
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
    cin >> x;
    int l = 0, mid, r = n - 1, ans = 0;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] == x) l = mid + 1, ans = 1;
        else if(a[mid] > x) l = mid + 1;
        else r = mid - 1;
    }
    if(ans) cout << r;
    else cout << -1;
    return 0;
}