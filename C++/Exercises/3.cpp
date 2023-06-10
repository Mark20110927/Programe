#include<bits/stdc++.h>
using namespace std;
int k;
string s;
int a[256];
int main(){
    cin >> k;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i ++){
        if(i == 0 || s[i] != s[i - 1])
            a[s[i]] = 0;
        a[s[i]] ++;
        if(a[s[i]] >= k){
            cout << s[i];
            return 0;
        }
    }
    cout << "No";
    return 0;
}