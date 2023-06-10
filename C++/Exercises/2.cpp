#include<bits/stdc++.h>
using namespace std;
//顺序查找-直方图
int n, a[10005], b[10005], maxf = 0, c = 0;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    for(int i = 1; i <= n; i ++){
        b[a[i]] ++;
        maxf = a[i] > maxf ? a[i] : maxf;
    }
    for(int i = 0; i <= maxf; i ++) cout << b[i] << endl;
    return 0;
}