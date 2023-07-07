#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char c;
    while (true) {
        cin >> c;
        s += c;
        if (c == 'E') break;
    }
    
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'W') cnt1++;
        else if (s[i] == 'L') cnt2++;
        
        if ((cnt1 >= 11 && cnt1 - cnt2 >= 2) || (cnt2 >= 11 && cnt2 - cnt1 >= 2) || s[i] == 'E') {
            cout << cnt1 << ':' << cnt2 << endl;
            cnt1 = 0;
            cnt2 = 0;
            if (s[i] == 'E') break;
        }
    }
    cout << endl;
    
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'W') cnt1++;
        else if (s[i] == 'L') cnt2++;
        
        if ((cnt1 >= 21 && cnt1 - cnt2 >= 2) || (cnt2 >= 21 && cnt2 - cnt1 >= 2) || s[i] == 'E') {
            cout << cnt1 << ':' << cnt2 << endl;
            cnt1 = 0;
            cnt2 = 0;
            if (s[i] == 'E') break;
        }
    }
    
    return 0;
}
