#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
    cin >> x;
    sort(a, a + n);
    int l = 0, mid, r = n - 1, ans = 0;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] == x){
            ans = 1;
            l = mid + 1;
        }
        else if(a[mid] > x){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if(ans)
        cout << r;
    else
        cout << -1;
    return 0;
}