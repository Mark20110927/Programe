#include<bits/stdc++.h>
using namespace std;
int a[15], b[15], num;
bool flag, c[15];
int main(){
    for(int i = 1; i <= 10;i ++){
        cin >>a[i];
        if(a[i] == 1) flag = true;
    }
    sort(a + 1, a+ 1 + 10);
    int minf = 1000000;
    for(int i = 1; i <= 10; i ++){
        if(a[i] > 0 && a[i] < minf){
            num = i;
            minf = a[i];
        }
    }
    cout << minf;
    b[1] = minf;
    c[num] = true;
    for(int i = 1; i <= 10 ;i ++){
        if(!c[i]) b[i] = a[i];
    }
    for(int i = 1; i < 10; i ++) cout << b[i];
    return 0;
}