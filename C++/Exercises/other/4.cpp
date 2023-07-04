#include<bits/stdc++.h>
using namespace std;
//买房子
int main(){
	int n, k;
    cin >> n >> k;
    int sr = n;
    float fj = 200;
    float zz = 1 + k / 100.0;
    int year = 0;
    while(year <= 20){
        year ++;
        if(sr >= fj){
            cout << year;
            return 0;
        }
        sr += n;
        fj *= zz;
    }
    cout << "Impossible";
	return 0; 
} 