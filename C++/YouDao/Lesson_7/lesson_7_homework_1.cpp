#include<bits/stdc++.h>
using namespace std;
int a[100005], b[100005], sum, lsum;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 1; i <= n; i ++){
        if(lsum == sum - lsum - a[i]){
            cout << i;
            return 0;
        }
        lsum += a[i];
    }
    cout << -1;
    return 0;
}