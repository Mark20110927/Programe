#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    int n, sum = 0, lsum = 0;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 1; i <= n; i ++){
        if(lsum == (sum - lsum - a[i]) * 2){
            cout << i;
            return 0;
        }
        lsum += a[i];
    }
    cout << -1;
    return 0;
}