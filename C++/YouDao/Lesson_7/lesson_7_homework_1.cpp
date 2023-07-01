#include<bits/stdc++.h>
using namespace std;
int a[100005], b[100005];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        int c;
        cin >> c;
        a[i] = a[i - 1] + c;
    }
    for(int i = n; i >= 1; i --) b[i] = b[i + 1] + a[i];
    for(int i = 1; i <= n; i ++){
        if(a[i - 1] == b[i + 1]){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}