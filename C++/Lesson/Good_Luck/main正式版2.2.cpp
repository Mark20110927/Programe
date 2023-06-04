#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	int a,bb = 0,cc = 0,dd = 0,h; 
	char b,c,d,e,f;
	cout<<"欢迎使用抽奖软件！"<<endl;
		cout<<"输入‘d ’进入电器抽奖"<<endl<<"输入‘w ’进入文具抽奖"<<endl;
		cout<<"输入‘s ’进入事件抽奖"<<endl<<"输入‘t ’进入玩具抽奖"<<endl; 
		cin>>b;
		h = int(b);
		if(h == 100) {
			do{
				srand((int)time(0));                        
				a = rand() % 10 + 1; 
				cout<<"您的抽奖结果是："; 
				switch(a){
					case 1:
						cout<<"吹风机"<<endl;
						break;
					case 2:
						cout<<"洗衣机"<<endl;
						break;
					case 3:
						cout<<"电视机"<<endl;
						break;
					case 4:
						cout<<"油烟机"<<endl;
						break;
					case 5:
						cout<<"吹风机"<<endl;
						break;
					case 6:
						cout<<"电视机"<<endl;
						break;
					case 7:
						cout<<"谢谢参与"<<endl;
						break;
					case 8:
						cout<<"再来一次"<<endl;
						cout<<"恭喜您可以再抽一次！"<<endl;
						break;
					case 9:
						cout<<"谢谢参与"<<endl;
						break;
					case 10:
						cout<<"谢谢参与"<<endl;
						break;
				}
			}while(a == 8);
		}
		if(h == 119) {
			do{
				srand((int)time(0));
				bb = rand() % 10 + 1; 
				cout<<"您的抽奖结果是："; 
				switch(bb){
					case 1:
						cout<<"80色马克笔"<<endl;
						break;
					case 2:
						cout<<"120色马克笔"<<endl;
						break;
					case 3:
						cout<<"钢尺"<<endl;
						break;
					case 4:
						cout<<"电动削笔机"<<endl;
						break;
					case 5:
						cout<<"40色彩铅"<<endl;
						break;
					case 6:
						cout<<"30色马克笔"<<endl;
						break;
					case 7:
						cout<<"谢谢参与"<<endl;
						break;
					case 8:
						cout<<"再来一次"<<endl;
						cout<<"恭喜您可以再抽一次！"<<endl;
						break;
					case 9:
						cout<<"再来一次"<<endl;
						cout<<"恭喜您可以再抽一次！"<<endl;
						break;
					case 10:
						cout<<"谢谢参与"<<endl;
						break;
				} 
			}while(bb == 8||bb == 9);
		}
		if(h == 115) {
			do{
				srand((int)time(0));
				cc = rand() % 10 + 1; 
				cout<<"您的抽奖结果是："; 
				switch(cc){
					case 1:
						cout<<"看10分钟小视频"<<endl;
						break;
					case 2:
						cout<<"看20分钟小视频"<<endl;
						break;
					case 3:
						cout<<"看一部电影"<<endl;
						break;
					case 4:
						cout<<"看一集综艺"<<endl;
						break;
					case 5:
						cout<<"看10分钟陶瓷视频"<<endl;
						break;
					case 6:
						cout<<"电视机"<<endl;
						break;
					case 7:
						cout<<"谢谢参与"<<endl;
						break;
					case 8:
						cout<<"再来一次"<<endl;
						cout<<"恭喜您可以再抽一次！"<<endl;
						break;
					case 9:
						cout<<"再来一次"<<endl;
						cout<<"恭喜您可以再抽一次！"<<endl;
						break;
					case 10:
						cout<<"谢谢参与"<<endl;
						break;
				} 
			}while(cc == 8||cc == 9);
		}
		if(h == 116) {
			do{
				srand((int)time(0));
				dd = rand() % 10 + 1; 
				cout<<"您的抽奖结果是："; 
				switch(dd){
					case 1:
						cout<<"乐高1"<<endl;
						break;
					case 2:
						cout<<"乐高2"<<endl;
						break;
					case 3:
						cout<<"乐高3"<<endl;
						break;
					case 4:
						cout<<"乐高4"<<endl;
						break;
					case 5:
						cout<<"乐高5"<<endl;
						break;
					case 6:
						cout<<"乐高6"<<endl;
						break;
					case 7:
						cout<<"谢谢参与"<<endl;
						break;
					case 8:
						cout<<"再来一次"<<endl;
						cout<<"恭喜您可以再抽一次！"<<endl;
						break;
					case 9:
						cout<<"乐高7"<<endl;
						break;
					case 10:
						cout<<"谢谢参与"<<endl;
						break;
				} 
			}while(dd == 8);
		}
} 
