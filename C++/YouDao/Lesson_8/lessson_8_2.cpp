#include<bits/stdc++.h>
using namespace std;
int a[10005], n, x;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    cin >> x;
    int l = a[1], mid, r = a[n], ans;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] < x) l = mid + 1;
        else if(a[mid] == x){
            r = mid - 1;
            ans = mid;
        }
        else r = mid - 1;
    }
    cout << l;
    return 0;
}