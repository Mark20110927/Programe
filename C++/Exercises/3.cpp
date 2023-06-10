#include<bits/stdc++.h>
using namespace std;
int k;
string s;
int a[1000];
int main(){
    cin >> k;
    cin >> s;
    int len = s.length();
    a[s[0]] ++;
    for(int i = 1; i < len; i ++){
        if(a[i - 1] == a[i])
            a[s[i]] ++;
    }
    for(int i = 1; i <= 1000; i ++){
        if(a[i] >= k){
            cout << char(i);
            return 0;
        }
    }
    return 0;
}