#include<bits/stdc++.h>
using namespace std;
//飞机降落 
const int N = 20;
struct plane{
	int t;//到达 
	int d;//盘旋 
	int l;//降落 
}p[N];
int n;//飞机数 
bool flag[N];//标记数组 
bool dfs(int step,int last){//将要安排的下一架飞机 上一家结束降落的时间 
	//出口 
	if(step==n+1)
		return true;
	//遍历所有可能
	for(int i = 1;i<=n;i++){
		//判断可能 到达时间+盘旋时间>=盘旋时间 并且没有被安排过 
		if(p[i].t+p[i].d>=last&&!flag[i]) {
			//标记
			flag[i] = true;
			if(dfs(step+1,max(last,p[i].t)+p[i].l))
				return true;
			//恢复现场
			flag[i] = false; 
		}
	} 
	return false; 
}
int main(){
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i = 1;i<=n;i++){
			cin>>p[i].t>>p[i].d>>p[i].l;
			
		}
		memset(flag,0,sizeof flag);
		if(dfs(1,0))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0; 
} 
