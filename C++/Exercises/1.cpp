#include<bits/stdc++.h>
using namespace std;
//计算邮费
int main(){
    int n, res = 0;
    bool flag;
    char c;
    cin >> n >> c;
    if(c == 'y') flag = true;
    else flag = false;
    if(n <= 1000){
        if(flag) cout << 8 + 5;
        else cout << 8;
        return 0;
    }
    res = 8;
    n -= 1000;
    res += n / 500 * 4;
    if(n % 500 != 0) res += 4;
    if(flag) res += 5;
    cout << res;
    return 0;
}