#include<bits/stdc++.h>
using namespace std;
struct jz{
    int start;
    int end;
}a[105];
bool cmp(jz x, jz y){
    return x.start < y.start;
}
int main(){
    int n, res = 1;
    cin >> n;
    for(int  i = 1; i <= n; i ++) cin >> a[i].start >> a[i].end;
    sort(a + 1, a + 1 + n, cmp);
    int ne = a[1].end;
    for(int i = 2; i <= n; i ++){
        if(a[i].start >= ne && a[i + 1].start > a[i].start){
            res ++;
            ne = a[i].end;
        }
        else if(a[i + 1].start > a[i].start){
            res ++;
            ne = a[i].end < a[i + 1].end ? a[i + 1].end : a[i].end;
        }
    }
    cout << res;
    return 0;
}