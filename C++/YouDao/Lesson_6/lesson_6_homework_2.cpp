#include <bits/stdc++.h>
using namespace std;
int a[10005], n, k, sum, maxf;
double b[10005];
int check(int mid){
    int num = 0;
    for(int i = 1; i <= n; i ++) num += a[i] / mid;
    return num;
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i ++){
        cin >> b[i];
        a[i] = b[i] * 100;
        sum += a[i];
        if(a[i] > maxf) maxf = a[i];
    }
    if(sum < k){
        cout << 0.00;
        return 0;
    }
    int l = 1, mid;
    double r = maxf;
    while(l <= r){
        mid = (l + r) / 2;
        if(check(mid) >= k) l = mid + 1;
        else r = mid - 1;
    }
    cout << fixed << setprecision(2) << r / 100 << endl;
    return 0;
}