#include<bits/stdc++.h>
using namespace std;
//顺序查找-消费券
int main(){
    int n, a, b, res = 0;
    double maxf = 0;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a >> b;
        double c = (double)b / a;
        if (c > maxf){
            maxf = c;
            res = i;
        }  
    }
    cout << res;
    return 0;
}