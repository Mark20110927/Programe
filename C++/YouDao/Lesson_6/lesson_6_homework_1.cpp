#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int a[N], b[N];
int n, m;
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    for (int i = 0; i < m; i ++ ) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int res = 0;
    for (int i = 0; i < m; i ++ ){
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (a[mid] < b[i]) l = mid + 1;
            else r = mid;
        }
        int k = l;
        if (a[k] == b[i]) continue;
        if (k == 0) res += abs(a[k] - b[i]);
        else if (k == n) res += abs(a[k - 1] - b[i]);
        else res += min(abs(a[k] - b[i]), abs(a[k - 1] - b[i]));
    }
    cout << res << endl;
    return 0;
}
