#include<bits/stdc++.h>
#include<queue>
using namespace std;
//∂”¡–ºÚµ•¡∑œ∞ 
queue<int> a;
int main(){
	cout<<a.empty()<<endl;
	cout<<a.size()<<endl;
//	cout<<a.front()<<endl;
//	cout<<a.back()<<endl;
	a.push(1);
	a.push(2);
	a.push(3);
	cout<<a.empty()<<endl;
	cout<<a.size()<<endl;
	cout<<a.front()<<endl;
	cout<<a.back()<<endl;
	a.pop();
	cout<<a.empty()<<endl;
	cout<<a.size()<<endl;
	cout<<a.front()<<endl;
	cout<<a.back()<<endl;
	return 0; 
} 
