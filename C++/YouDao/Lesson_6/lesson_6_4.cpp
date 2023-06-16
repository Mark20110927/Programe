#include<bits/stdc++.h>
using namespace std;
double n, e;
int m;
int main(){
    cin >> n >> e >> m;
    double l = 0, r = 5, mid;
    while((r - l) > 0.00001){
        mid = (l + r) / 2;
        double a = n;
        for(int i = 1; i <= m; i ++)
            a = a * (1 + mid) - e;
        if(a == 0) break;
        else if(a > 0) r = mid;
        else l = mid;
    }
    cout << floor(mid * 1000) / 1000 * 100;
    return 0;
}