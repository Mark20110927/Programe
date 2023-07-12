#include<bits/stdc++.h>
using namespace std;
struct good{
    int w, p, id;
    double mi;
}a[25];
int n, c, nw;
bool cmp(good a, good b){
    return a.mi >  b.mi;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i].w;
    for(int i = 1; i <= n; i ++){
        cin >> a[i].p;
        a[i].id = i;
        a[i].mi = (double) a[i].p / a[i].w;
    }
    sort(a + 1, a + 1 + n, cmp);
    cin >> c;
    for(int i = 1; i <= n; i ++){
        if(nw + a[i].w <= c){
            nw += a[i].w;
            cout << a[i].id << ' ';
        }
    }
    return 0;
}