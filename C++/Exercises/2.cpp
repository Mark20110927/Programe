#include<bits/stdc++.h>
using namespace std;
//顺序查找-直方图
int n, a[10005], b[10005], maxf = 0, c;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    for(int i = 1; i <= n; i ++){
        b[a[i]] ++;
        c = a[i] > c ? a[i] : c;
    }
    for(int i = 1; i <= c; i ++) cout << b[i] << endl;
    return 0;
}