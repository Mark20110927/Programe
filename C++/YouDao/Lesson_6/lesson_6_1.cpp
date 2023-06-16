#include<bits/stdc++.h>
using namespace std;
int a[1000005], n, c, sum;
int main(){
    cin >> n >> c;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    sort(a, a + n);
    for(int i = 1; i <= n; i ++){
        int x = a[i] + c;
        int l = i + 1, mid, r = n, ans1 = -1, ans2 = 0;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] == x){
                ans1 = mid;
                break;
            }
            else if(a[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
        l = i - 1, r = n;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] == x){
                ans2 = mid;
                break;
            }
            else if(a[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
        if(ans1 != -1 && ans2 != -1) sum += ans2 - ans1 + 1;
        else if(ans1 != -1) sum ++;
    }
    cout << sum;
    return 0;
}