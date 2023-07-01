#include<bits/stdc++.h>
using namespace std;
bool a[100005];
int main(){
    int l, m, cnt = 0;
    memset(a, 1, sizeof(a));
    cin >> l >> m;
    for(int i = 1; i <= m; i ++){
        int x, y;
        cin >> x >> y;
        for(int i = x; i <= y; i ++) a[i] = false;
    }
    for(int i = 1; i <= l; i ++){
        if(a[i]) cnt ++;
    }
    cout << cnt + 1;
    return 0;
}