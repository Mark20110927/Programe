#include<bits/stdc++.h>
using namespace std;
int a[10005], n, k, sum, maxf;
int check(int mid){
    int num = 0;
    for(int i = 1; i <= n; i ++) num += a[i] / mid;
    return num;
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
        sum += a[i];
        if(a[i] > maxf) maxf = a[i];
    }
    if(sum < k){
        cout << 0;
        return 0;
    }
    int l = 1, mid, r = maxf;
    while(l <= r){
        mid = (l + r) / 2;
        if(check(mid) >= k) l = mid + 1;
        else r = mid - 1;
    }
    cout << r;
    return 0;
}