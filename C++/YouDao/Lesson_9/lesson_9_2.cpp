#include<bits/stdc++.h>
using namespace std;
int a[20005];
int main(){
    int n, b;
    long long sum = 0;
    cin >> n >> b;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    sort(a + 1, a + 1 + n, greater<int>());
    for(int i = 1; i <= n; i ++){
        sum += a[i];
        if(sum >= b){
            cout << i;
            return 0;
        }
    }
    return 0;
}