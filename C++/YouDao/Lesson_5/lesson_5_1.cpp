#include<bits/stdc++.h>
using namespace std;
int a[10002];
int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i ++)
        cin >> a[i];
    cin >> x;
    int l = 0, mid, r = n - 1, ans= -1;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid] == x){
            ans = mid;
            break;
        }
        else if(a[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans;
}