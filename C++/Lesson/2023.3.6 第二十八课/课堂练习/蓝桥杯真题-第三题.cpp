#include<bits/stdc++.h>
using namespace std;
//蓝桥杯真题-第三题 
//翻扑克
const int N = 1e3+10;
bool a[N];
int ff[]={3,2,1,0};
int fz[]={0,1,2,3}; 
struct ZT{
	int f;//反面数 
	int b;//步数 
}s[N];
int main(){
	int n;
	cin>>n;
	s[1].f = n;
	s[1].b = 0;
	int hou = 0;
	int now = 1;
	while(hou<now){
		hou++;
		for(int i = 0;i<=3;i++){
			if(n-s[hou].f>=fz[i]&&s[hou].f>=ff[i]&&a[s[hou].f-ff[i]+fz[i]]==false){
				now++;
				s[now].f = s[hou].f-ff[i]+fz[i];
				s[now].b = s[hou].b+1;
				a[s[now].f] = true;
				if(s[now].f==0){
					cout<<s[now].b;
					return 0;
				}
			}
		}
	}
	return 0; 
} 
