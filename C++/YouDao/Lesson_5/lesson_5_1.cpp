#include<bits/stdc++.h>
using namespace std;
int a[10002];
int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i ++)
        cin >> a[i];
    cin >> x;
    int l = 1, mid = (n - 1)/2, r = n - 1;
    while(l <= r){
        if(a[mid - 1] == x){
            cout << mid;
            return 0;
            break;
        }
        else if(a[mid - 1] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
        mid = r / 2;
    }
    cout << "-1";
}