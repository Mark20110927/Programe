#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
const int N = 1e6+10;
bool c1 = false,c2 = false,c3 = false,c4 = false,c5 = false;
bool c6 = false,c7 = false;
int numf[N],numf2[N];
//int qian35(bool *c){
//	int num,tmp;
//	srand((int)time(0));
//	Sleep(1);
//	num = numf[rand() %N+1];
//	if(num/10==0)
//		*c = true;
//	return num;	 
//}
//int hou12(bool *c){
//	int num,tmp;
//	srand((int)time(0));
//	Sleep(1);
//	num = numf2[rand() %N+1];
//	if(num/10==0)
//		*c = true;
//	return num;	 
//}
int main(){
//	for(int i = 1;i<=N;i++){
//		srand((int)time(0));
//		Sleep(1000);
//		numf[i] = rand()%35+1; 
//		srand((int)time(0));
//		Sleep(1000);
//		numf2[i] = rand()%12+1;
//}
//	int n1,n2,n3,n4,n5,n6,n7;
//	n1 = qian35(&c1);
//	n2 = qian35(&c2);
//	n3 = qian35(&c3);
//	n4 = qian35(&c4);
//	n5 = qian35(&c5);
//	n6 = hou12(&c6);
//	n7 = hou12(&c7);
cout<<"体彩"<<endl; 
	int num,tmp;
	srand((int)time(0));
	num = rand() %35+1;
	if(c1)
		cout<<0;
	cout<<num<<" ";
	num = 0;
	num = rand() %35+1;
	if(c2)
		cout<<0;
	cout<<num<<" ";
	num = 0;
	num = rand() %35+1;
	if(c3)
		cout<<0;
	cout<<num<<" ";
	num = 0;
	num = rand() %35+1;
	if(c4)
		cout<<0;
	cout<<num<<" ";
	num = 0;
	num = rand() %35+1;
	if(c5)
		cout<<0;
	cout<<num<<" ";
	num = 0;
	num = rand() %12+1;
	if(c6)
		cout<<0;
	cout<<num<<" ";
	num = 0;
	num = rand() %12+1;
	if(c7)
		cout<<0;
	cout<<num<<" ";
	cout<<endl<<"????????"<<endl; 
	int numf;
	srand((int)time(0));
	numf = rand() %33+1;
	if(c1)
		cout<<0;
	cout<<numf<<" ";
	numf = 0;
	numf = rand() %33+1;
	if(c2)
		cout<<0;
	cout<<numf<<" ";
	numf = 0;
	numf = rand() %33+1;
	if(c3)
		cout<<0;
	cout<<numf<<" ";
	numf = 0;
	numf = rand() %33+1;
	if(c4)
		cout<<0;
	cout<<numf<<" ";
	numf = 0;
	numf = rand() %33+1;
	if(c5)
		cout<<0;
	cout<<numf<<" ";
	numf = 0;
	numf = rand() %16+1;
	if(c6)
		cout<<0;
	cout<<numf<<" ";
	return 0; 
} 
