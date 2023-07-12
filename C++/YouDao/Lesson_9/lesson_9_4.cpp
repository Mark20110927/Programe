#include<bits/stdc++.h>
using namespace std;
struct jz{
    int start;
    int end;
}a[105];
bool cmp(jz x, jz y){
    return x.end < y.end;
}
int main(){
    int n, res = 0;
    cin >> n;
    for(int  i = 1; i <= n; i ++) cin >> a[i].start >> a[i].end;
    sort(a + 1, a + 1 + n, cmp);
    int ne = 0;
    for(int i = 1; i <= n; i ++){
        if(a[i].start >= ne){
            res ++;
            ne = a[i].end;
        }
    }
    cout << res;
    return 0;
}