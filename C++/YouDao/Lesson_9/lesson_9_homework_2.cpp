#include<bits/stdc++.h>
using namespace std;
struct poeple{
    int time;
    int id;
}a[1000005];
int n;
double sum;
bool cmp(poeple a, poeple b){
    return a.time < b.time;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i].time;
        sum += a[i].time;
        a[i].id = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    for(int i = 1; i <= n; i ++){
        cout << a[i].id << ' '; 
    }
    cout << endl << (double) sum / n;
    return 0;
}