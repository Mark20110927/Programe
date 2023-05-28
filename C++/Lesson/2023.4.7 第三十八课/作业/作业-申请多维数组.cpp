#include<bits\stdc++.h>
using namespace std;
//作业-申请多维数组 
int main(){
	int chang,kuan,gao;
	srand((int)time(NULL));
	int i,j,k;
	cout<<"请输入一维数组的长："; 
	cin>>chang;
	//动态定义一维数组
	int *p = new int[chang];
	//输入一维数组的值
	for(i = 0;i<chang;i++)
		p[i] = rand()%10;
	//输出一维数组
	for(i = 0;i<chang;i++)
		cout<<p[i]<<" ";
	cout<<endl;
	//释放一维数组
	delete []p;
	cout<<"请输入二维数组的长，宽：";
	cin>>chang>>kuan; 
	//动态定义二维数组
	int **p1 = new int *[chang];
	for(i = 0;i<chang;i++)
		p1[i] = new int[kuan];
	//输入二维数组的值
	for(i = 0;i<chang;i++)
		for(j = 0;j<kuan;j++)
			p1[i][j] = rand()%10;
	//输出二维数组
	for(i = 0;i<chang;i++){
		for(j = 0;j<kuan;j++)
			cout<<p1[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	//释放二维数组
	for(i = 0;i<chang;i++)
		delete []p1[i];
	cout<<"请输入三维数组的长，宽，高：";
	cin>>chang>>kuan>>gao;
	//动态定义三维数组：
	int ***p2 = new int **[gao];
	for(i = 0;i<gao;i++)
		p2[i] = new int *[chang];
	for(i = 0;i<gao;i++)
		for(j = 0;j<chang;j++)
			p2[i][j] = new int[kuan];
	//输入三维数组值：
	for(i = 0;i<gao;i++)
		for(j = 0;j<chang;j++)
			for(k = 0;k<kuan;k++)
				p2[i][j][k] = rand()%10;
	//输出三维数组：
	for(i = 0;i<gao;i++){
		cout<<"第"<<i+1<<"层"<<endl;
		for(j = 0;j<chang;j++){
			for(k = 0;k<kuan;k++)
				cout<<p2[i][j][k]<<' ';
			cout<<endl;
		}
		cout<<endl;
	}
	cout<<endl;
	//释放三维数组
	for(i = 0;i<gao;i++)
		for(j = 0;j<chang;j++)
			delete []p2[i][j];
	for(i = 0;i<gao;i++)
		delete []p2[i];
	delete []p2;
	return 0 ;
}
