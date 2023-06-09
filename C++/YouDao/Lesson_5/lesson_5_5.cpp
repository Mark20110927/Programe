#include<bits/stdc++.h>
using namespace std;
int n, m, a[100005], x;
int main(){
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
    cin >> m;
    while(m --){
        cin >> x;
        if(x < a[0]){
            cout << a[0] << endl;
            continue;
        }
        if(x > a[n - 1]){
            cout << a[n - 1] << endl;
            continue;
        }
        int l = 0, mid, r = n - 1, ans = 0;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] == x){
                cout << x << endl;
                ans = 1;
                break;
            }
            else if(a[mid] > x) r = mid - 1;
            else l = mid + 1;
        }
        if(!ans){
            if(x - a[r] <= a[l] - x) cout << a[r] << endl;
            else cout << a[l] << endl;
        }
    }
    return 0;
}