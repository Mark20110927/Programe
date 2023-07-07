#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c;
    while(true){
        cin >> c;
        s += c;
        if(c == 'E') break;
    }
    int cnt1 = 0, cnt2 = 0;
    for(int i = 1; i < s.size() ; i ++){
        if(s[i] == 'W') cnt1 ++;
        else cnt1 ++;
        if(cnt1 == 11 || cnt2 == 11){
            cout << cnt1 << ':' << cnt2 << endl;
            cnt1 = 0;
            cnt2 = 0;
        }
        if(s[i] == 'E'){
            cout << cnt1 << ':' << cnt2 << endl << endl;
            break;
        }
    }
    for(int i = 1; i < s.size() ; i ++){
        if(s[i] == 'W') cnt2 ++;
        else cnt1 ++;
        if(cnt1 == 21 || cnt2 == 21){
            cout << cnt1 << ':' << cnt2 << endl;
            cnt1 = 0;
            cnt2 = 0;
        }
        if(s[i] == 'E'){
            cout << cnt1 << ':' << cnt2 << endl << endl;
            break;
        }
    }
    return 0;
}