#include<bits/stdc++.h>
using namespace std;
int n, a[100005], m;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    cin >> m;
    sort(a + 1, a + n);
    for(int i = 1; i < n; i ++){
        int l = i + 1, mid, r = n, x = m - a[i];
        while(l <= r){
            mid = (l + r) / 2;
            if(mid == x){
                cout << a[i] << ' ' << mid;
                return 0;
            }
            else if(mid > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
    }
    cout << "No";
    return 0;
}