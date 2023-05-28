#include<bits/stdc++.h>
using namespace std;
//作业-奖牌统计 
const int N = 17;
struct day{
	int gold;
	int silver;
	int copper;
}a[N];
int main(){
	int n,jin = 0,yin = 0,tong = 0,sum = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i].gold>>a[i].silver>>a[i].copper;
	}
	for(int i = 1;i<=n;i++){
		jin+=a[i].gold;
		yin+=a[i].silver;
		tong+=a[i].copper;
	}
	sum+=jin+yin+tong; 
	printf("%d %d %d %d",jin,yin,tong,sum);
	return 0; 
} 
