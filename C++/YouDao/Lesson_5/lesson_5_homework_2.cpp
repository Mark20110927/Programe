#include<bits/stdc++.h>
using namespace std;
int n, x1, x2;
bool flag1, flag2;
struct srore{
    int sum;
    int chinese;
    int maths;
    int english;
}a[105];
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++)
        cin >> a[i].sum >> a[i].chinese >> a[i].maths >> a[i].english;
    cin >> x1 >> x2;
    int l = 1, mid, r = n, ans1, ans2;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid].sum == x1){
            flag1 = true;
            ans1 = mid;
            break;
        }
        else if(a[mid].sum > x1) r = mid - 1;
        else l = mid + 1;
    }
    l = 1, r = n;
    while(l <= r){
        mid = (l + r) / 2;
        if(a[mid].sum == x2){
            flag2 = true;
            ans2 = mid;
            break;
        }
        else if(a[mid].sum > x2) r = mid - 1;
        else l = mid + 1;
    }
    if(flag1 && flag2){
        int res1, res2;
        if(a[ans1].maths > a[ans2].maths)
            res1 = a[ans1].maths - a[ans2].maths;
        else
            res1 = a[ans2].maths - a[ans1].maths;
        if(a[ans1].english > a[ans2].english)
            res2 = a[ans1].english - a[ans2].english;
        else
            res2 = a[ans2].english - a[ans1].english;
        cout << res1 << ' ' << res2;
        return 0;
    }
    cout << -1;
    return 0;
}