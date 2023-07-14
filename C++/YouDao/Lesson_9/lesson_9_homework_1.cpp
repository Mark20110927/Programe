#include<bits/stdc++.h>
using namespace std;
int a[15], num;
int main(){
    for(int i = 1; i <= 10;i ++){
        cin >>a[i];
    }
    sort(a + 1, a+ 1 + 10);
    for(int i = 1; i <= 10; i ++){
        if(a[i] > 0){
            cout << a[i];
            a[i] = -1;
            break;
        }
    }
    for(int i = 1; i <= 10 ;i ++){
        if(a[i] != -1){
            cout << a[i];
        }
    }
    return 0;
}