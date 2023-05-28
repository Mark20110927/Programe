#include<bits/stdc++.h>
using namespace std;
int a[105][105];
long long f[105][105];
int bx, by, mx, my;
const int fx[] = {0, -2, -2, -1, -1, 1, 1, 2, 2};
const int fy[] = {0, -1, 1, -2, 2, -2, 2, -1, 1};
int main(){
    cin >> bx >> by >> mx >> my;
    bx += 2;
    by += 2;
    mx += 2;
    my += 2;
    for(int i = 0; i < 9; i ++){
        a[mx + fx[i]][my + fy[i]] = 1;
    }
    f[1][2] = 1;
    for(int i = 2; i <= bx; i ++){
        for(int j = 2; j <= by; j ++){
            if(a[i][j]) f[i][j] = 0;
            else f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    }
    cout << f[bx][by];
    return 0;
}