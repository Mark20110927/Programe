#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a, b, c, d;
    cin >> n;
    a = n / 20;
    n %= 20;
    b = n / 10;
    n %= 10;
    c = n / 5;
    n %= 5;
    d = n;
    cout << a << ' ' << b << ' ' << c << ' ' << d;
    
    return 0;
}