#include<bits/stdc++.h>
using namespace std;
long long b[100005];
int main(){
    int n, q, a;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a;
        b[i] = b[i - 1] + a;
    }
    cin >> q;
    while(q --){
        int x, y;
        cin >> x >> y;
        cout << b[y] - b[x - 1] << endl;
    }
    return 0;
}