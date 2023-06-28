#include<bits/stdc++.h>
using namespace std;
//正常血压
struct XY{
    int ss;
    int sz;
} a[105];
int main(){
	int n, res = 0, maxf = 0;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i].ss >> a[i].sz;
        if(a[i].ss >= 90 && a[i].ss <= 140 && a[i].sz >= 60 && a[i].sz <= 90){
            res ++;
            continue;
        }
        if(res > maxf) maxf = res;
        res = 0;

    }
    cout << maxf;
	return 0; 
} 