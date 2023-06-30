#include<bits/stdc++.h>
using namespace std;
int a[15];
int main(){
    int n, x;
    cin >> n >> x;
    for(int i = 0; i <= n - 1; i ++) cin >> a[i];
    int f = a[n];
    for(int i = n - 1; i >= 0; i --) f = f * x + a[i];
    cout << f;
    return 0;
}