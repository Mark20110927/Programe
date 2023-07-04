#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, n1;
    double he = 0, pjz;
    cin >> n;
    n1 = n;
    while(n --){
        int x;
        cin >> x;
        he += x;
    }
    pjz = he / n1;
    cout << he << ' ' << fixed << setprecision(5) << pjz;
    return 0;
}