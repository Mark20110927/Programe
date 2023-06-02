#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int b[3][2] = {{-1,0},{0,1},{1,-1}};
int main(){
    int n;
    cin>>n;
    int cnt = 0,x = n,y = 1,d = 0;
    while(cnt<(n*(n+1)/2)){
        cnt++;
        a[x][y] = cnt;
        if(x - y == 1)
            a[x][y] *= a[x][y];
        if(x+b[d][0]<1||x+b[d][0]>n||y+b[d][1]<1||y+b[d][1]>n||a[x+b[d][0]][y+b[d][1]])
            d = (d+1)%3;
        x+=b[d][0];
        y+=b[d][1];
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j] != 0)
                cout<<setw(5)<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}