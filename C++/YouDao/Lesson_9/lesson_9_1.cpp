#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    int money[4] = {20, 10, 5, 1};
    for(int i = 1; i <= 4; i ++){
        a = n % money[i];
        cout << a << ' ';
        n %= money[i];
    }
    return 0;
}