#include<bits/stdc++.h>
using namespace std;
struct good{
    int w;
    int id;
}a[105];
int n, c, nc, tmp;
int ans[105];
bool cmp(good a, good b){
    if(a.w == b.w) return a.id < b.id;
    else return a.w < b.w;
}
int main(){
    bool flag = false;
    cin >> c >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i].w;
        a[i].id = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    for(int i = 1; i <= n; i ++){
        if(nc + a[i].w <= c){
            flag = true;
            nc += a[i].w;
            ans[++tmp] = a[i].id;
        }
    }
    if(!flag) cout << "No answer!";
    else{
        sort(ans + 1, ans + 1 + tmp);
        cout << tmp << endl;
        for(int i = 1; i <= tmp; i ++) cout << ans[i] << ' ';
    }
    return 0;
}