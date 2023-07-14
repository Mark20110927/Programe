#include<bits/stdc++.h>
using namespace std;
struct poeple{
    int time;
    int id;
}a[1005];
int n;
double sum;
bool cmp(poeple a, poeple b){
    return a.time < b.time;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i].time;
        a[i].id = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    double wait_time = 0;
    for(int i = 1; i <= n; i ++){
        wait_time += (n - i) * a[i].time;
        cout << a[i].id << ' '; 
    }
    cout << endl << fixed << setprecision(2) << wait_time / n << endl;
    return 0;
}