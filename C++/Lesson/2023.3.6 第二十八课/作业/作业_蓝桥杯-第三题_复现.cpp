#include<bits/stdc++.h>
using namespace std;
//作业_蓝桥杯-第三题_复现
const int N= 1e3+10;
bool a[N];
int ff[N] = {3,2,1,0};
int fz[N] = {0,1,2,3};
struct ZT{
	int f;
	int b;
} zt[N]; 
int main(){
	int n;
	cin>>n;
	zt[1].f = n;
	zt[1].b = 0;
	int hou = 0,now = 1;
	while(hou<now){
		hou++;
		for(int i = 0;i<=3;i++){
			if(zt[hou].f>=ff[i]&&n-zt[hou].f>=fz[i]&&a[zt[hou].f-ff[i]+fz[i]]==false){
				now++;
				zt[now].f = zt[hou].f-ff[i]+fz[i];
				zt[now].b = zt[hou].b+1;
				a[zt[now].f] = true;
				if(zt[now].f==0){
					cout<<zt[now].b;
					return 0;
				}
			}
		}
	}
	cout<<-1;
	return 0; 
} 
