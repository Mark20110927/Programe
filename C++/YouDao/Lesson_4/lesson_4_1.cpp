#include<bits/stdc++.h>
using namespace std;
int mapf[11][11], tmp[11][11], energy;
int main(){
    int a,b;
    // cin >> a >> b;
    a = 25;
    b = 6;
    energy = b;
    int x, y, z;
    // while(true){
    //     cin >> x >> y >> z;
    //     if(!x && !y && !z) break;
    //     mapf[x][y] = z;
    // }
    mapf[1][1] = 12;
    mapf[2][3] = 6;
    mapf[3][5] = 7;
    mapf[4][2] = 11;
    mapf[5][5] = 19;
    mapf[3][6] = 4;
    mapf[6][3] = 15;
    mapf[4][4] = 7;
    x = 1;
    y = 1;
    for(int i = 1; i <= a; i ++){
        for(int j = a; j >= 1; j --){
            tmp[i][j] = max(mapf[i - 1][j], mapf[i][j + 1]);
            cout << tmp[i][j] << endl;
        }
    }
    if(tmp[a][1] >= energy)
        cout << "no";
    else
        cout << tmp[a][1];
    return 0;
}