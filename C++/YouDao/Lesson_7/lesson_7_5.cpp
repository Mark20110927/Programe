#include<bits/stdc++.h>
using namespace std;
int n, w, t, a[605];
int main(){
    cin >> n >> w;
    for(int i = 1; i <= n; i ++){
        cin >> t;
        a[t] ++;
        int p = max(1, i * w / 100);
        for(int j = 600; j >= 0; j --){
            p -= a[j];
            if(p <= 0){
                cout << j << ' ';
                break;
            }
        }
    }
    return 0;
}