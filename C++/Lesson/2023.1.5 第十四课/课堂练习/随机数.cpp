#include<bits/stdc++.h>
using namespace std;
//随机数 
int main(){
	//实现真正随机的两个步骤
	//撒时间种子 time(0) 返回现在到1970年1月1日零点整的秒数 
	srand(time(0));
	//使用 rand() 产生随机数
	//如果需要范围随机数，则需要使用 rand()% 范围的结尾数  +   范围的起始数
	//如果从零开始使用一个范围随机数： 
	cout<<rand()<<endl;
	cout<<rand()<<endl; 
	cout<<rand()<<endl;
	return 0; 
} 
