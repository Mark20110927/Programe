#include<bits/stdc++.h>
using namespace std;
int n, s, a[1000005];
int main(){
    cin >> n >> s;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int ans = 0;
    for(int i = 1; i <= n; i ++){
        int l = i + 1, r = n, mid;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[i] + a[mid] <= s) l = mid + 1;
            else r = mid - 1;
        }
        ans += r - i;
    }
    cout << ans;
    return 0;
}